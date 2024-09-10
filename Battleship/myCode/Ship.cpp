/*
 * Ship.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "Ship.h"

Ship::Ship(const GridPosition &bow, const GridPosition &stern):
bow(bow), stern(stern)
{
}

bool Ship::isValid() const
{
	bool val1 =false;
	if(this->bow.getRow() == this->stern.getRow()){
		if(this->bow.getColumn() - this->stern.getColumn() < 5 &&
				this->bow.getColumn() - this->stern.getColumn() > 2 ){
			val1 = true;
		}
	}
	else if (this->bow.getColumn() == this->stern.getColumn()){
		if(this->bow.getRow()-this->stern.getRow() <5 &&
				this->bow.getRow() - this->stern.getRow() > 2){
			val1 = true;
		}
	}
	return val1;
}

GridPosition Ship::getBow()
{
	return this->bow;
}

GridPosition Ship::getStern()
{
	return this->stern;
}

int Ship::length()
{
	int length;
	isValid();
	if(this->bow.getRow() == this->stern.getRow()){
			length = this->bow.getColumn() - this->stern.getColumn();

	}
	else if (this->bow.getColumn() == this->stern.getColumn()){
			length = this->bow.getRow()-this->stern.getRow();
	}
	return length;
}

const std::set<GridPosition> Ship::occupiedArea()
{
	std::set<GridPosition> occArea;
	if(this->bow.getRow() == this->stern.getRow()){
		for(int i = this->bow.getColumn(); i< this->stern.getColumn(); i++){
			occArea.insert(GridPosition(this->bow.getRow(), i));
		}
	}
	else if (this->bow.getColumn() == this->stern.getColumn()){
		for(char i = this->bow.getRow(); i< this->stern.getRow(); i++){
			occArea.insert(GridPosition(i, this->bow.getColumn()));
		}
	}

	return occArea;
}

//const std::set<GridPosition> Ship::blockedArea()
//{
//}

Ship::~Ship()
{
	// TODO Auto-generated destructor stub
}

