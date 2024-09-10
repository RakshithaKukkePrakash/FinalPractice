/*
 * OpponentGrid.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "OpponentGrid.h"


OpponentGrid::OpponentGrid(int rows, int columns): rows(rows), columns(columns)
{
}

int OpponentGrid::getRows() const
{
	return this->rows;
}

int OpponentGrid::getColumns() const
{
	 return this->columns;
}

OpponentGrid::~OpponentGrid()
{
	// TODO Auto-generated destructor stub
}

