/*
 * ShopDb.cpp
 *
 *  Created on: 10.02.2024
 *      Author: mnl
 */

#include "ShopDb.h"
#include "Shop.h"

using namespace std;

ShopDb& ShopDb::addShop(std::unique_ptr<Shop> &&shop) {
	this->knownShops[shop->getName()] = std::move(shop);
	return *this;
}

std::vector<Shop*> ShopDb::shops() const {
	std::vector<Shop*> shopVect;
	for(auto itr = knownShops.begin(); itr != knownShops.end(); itr++){
		//shopVect.push_back(itr->second);
	}
	return shopVect;
}


//Shop* ShopDb::shopByName(std::string name) {
//	return this;
//}
