/*
 * GridPosition.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "GridPosition.h"


GridPosition::GridPosition(char row, int column): row(row), column(column)
{
}

GridPosition::GridPosition(std::string position)
{
	this->row = position.find('A'-'Z');
	this->column = position.find('0'-'9');

}

bool GridPosition::isValid() const
{
	if(this->row>= 'A' && this->row <= 'Z' && this->column > 0){
		return true;
	}
	return false;
}

char GridPosition::getRow() const
{
	return this->row;
}

int GridPosition::getColumn() const
{
	return this->column;
}

GridPosition::operator std::string() const
{
	std::string str;
	str = std::string(1,this->row) + std::to_string(this->column);

	return str;
}

bool GridPosition::operator ==(GridPosition other) const
{
	if(this->row == other.row && this->column == other.column)
		return true;
	return false;}

bool GridPosition::operator <(GridPosition other) const
{
	if((row==other.row))
		return column<other.column;
	else
		return row<other.row;
}

GridPosition::~GridPosition()
{
}

