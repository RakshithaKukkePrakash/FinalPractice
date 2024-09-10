/*
 * OwnGrid.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef OWNGRID_H_
#define OWNGRID_H_
#include "Ship.h"
#include <iostream>
#include <vector>

class OwnGrid
{
	int rows;
	int columns;
public:
	OwnGrid(int rows, int columns);
	int getRows() const;
	int getColumns() const;
	bool placeShip(const Ship& ship);
	const std::vector<Ship> getShips() const;
	virtual ~OwnGrid();
};

#endif /* OWNGRID_H_ */
