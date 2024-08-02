/*
 * ShoppingList.cpp
 *
 *  Created on: 10.02.2024
 *      Author: mnl
 */

#include "ShoppingList.h"
#include "Item.h"

using namespace std;

ShoppingList& ShoppingList::addItem(std::string name, float quantity) {
	Item itm(name,quantity);
	this->neededItems.emplace_back(itm);
	return *this;
}

void ShoppingList::items(std::list<Item>::const_iterator &begin,
		std::list<Item>::const_iterator &end) const {

	begin = this->neededItems.begin();
	end = this->neededItems.end();
}
