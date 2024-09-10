/*
 * QuantityDiscount.cpp
 *
 *  Created on: 11.02.2024
 *      Author: mnl
 */

#include "QuantityDiscount.h"
using namespace std;
QuantityDiscount& QuantityDiscount::addLimit(float quantity, float discount) {
	this->limits.insert(make_pair(quantity, discount));
	return *this;
}

float QuantityDiscount::discountFor(float quantity) const {
	float dis= 0;
	auto min = this->limits.begin();
	auto max = this->limits.rbegin();
	if(quantity < min->first){
		dis = 0;
	}
	else{
		for(auto itr = min; itr!= this->limits.end(); itr++){
			if(quantity > itr->first){
				dis= itr->second;
			}
		}
	}


	return dis;
}
