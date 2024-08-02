#include "SensorNetwork.h"
#include "DuplicateSensorName.h"

SensorNetwork& SensorNetwork::add(std::unique_ptr<Sensor> &&sensor) {
    for(auto& s: sensors){
        if(sensor->getName() == s->getName()){
            this->sensors.push_back(std::move(sensor));
        }
        else{
            throw DuplicateSensorName(sensor->getName());
        }
    }

    return *this;
}
