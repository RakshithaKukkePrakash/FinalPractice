#include "TableBasedAdjuster.h"

TableBasedAdjuster& TableBasedAdjuster::addBreakpoint(float x, float y) {
    this->breakpoints.insert(std::pair<float, float>(x, y));
    return *this;
}

float TableBasedAdjuster::adjust(float value) const {
    if(this->breakpoints.empty()){
        return value;
    }
    float a= 0;

    auto min= breakpoints.rbegin();
    auto max= breakpoints.end();
    float k_min = min->first;
    float k_max = max->first;
    float v_min = min->second;
    float v_max = min->second;
    if(value <= k_min)
    {
        a = v_min - (k_min - value);
    }
    else if (value >= k_max)
    {
        a = v_max + (value - k_max);
    }

    for(auto it= min; it!=max; it++)
    {
        auto next = std::next(it);
        if(it->first > value && value < next->first){
            a = (value - it->first) / (next->first - it->first) * (next->second - it->second) + it->second;
        }
    }


    return a;
}
