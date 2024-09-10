/*
 * OwnGrid.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "OwnGrid.h"


OwnGrid::OwnGrid(int rows, int columns): rows(rows), columns(columns)
{
}

int OwnGrid::getRows() const
{
	return this->rows;
}

int OwnGrid::getColumns() const
{
	 return this->columns;
}

bool OwnGrid::placeShip(const Ship &ship)
{
	return false;
}

//const std::vector<Ship> OwnGrid::getShips() const
//{
//}

OwnGrid::~OwnGrid()
{
	// TODO Auto-generated destructor stub
}

