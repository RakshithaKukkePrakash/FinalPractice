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
	unique_ptr<Shop> sPtr = make_unique<Shop>(shop->getName());
	this->knownShops.insert(make_pair(shop->getName(), move(sPtr)));
	return *this;
}

std::vector<Shop*> ShopDb::shops() const {
	std::vector<Shop*> shopVect;
	for(auto& s: knownShops){
		shopVect.push_back(move(s.second.get()));
	}

	return shopVect;
}

Shop* ShopDb::shopByName(std::string name) {
	Shop* sPtr=nullptr;
	for(auto& s: knownShops){
		if(name == s.first){
			sPtr = s.second.get();
		}
	}
	return sPtr;
}
