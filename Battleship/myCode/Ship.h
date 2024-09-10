/*
 * Ship.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef SHIP_H_
#define SHIP_H_
#include "GridPosition.h"
#include <iostream>
#include <stdlib.h>
#include <set>
class Ship
{
	GridPosition bow;
	GridPosition stern;
public:
	Ship(const GridPosition& bow, const GridPosition& stern);
	bool isValid() const;
	GridPosition getBow();
	GridPosition getStern();
	int length();
	const std::set<GridPosition> occupiedArea();
	const std::set<GridPosition> blockedArea();
	virtual ~Ship();
};

#endif /* SHIP_H_ */
