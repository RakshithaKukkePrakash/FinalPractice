/*
 * GridPosition.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef GRIDPOSITION_H_
#define GRIDPOSITION_H_
#include <iostream>
#include <stdlib.h>
#include <string>
class GridPosition
{
	char row;
	int column;
public:
	GridPosition(char row, int column);
	GridPosition(std::string position);
	bool isValid() const;
	char getRow() const;
	int getColumn() const;
	operator std::string() const;
	bool operator==(GridPosition other) const;
	bool operator<(GridPosition other) const;
	virtual ~GridPosition();
};

#endif /* GRIDPOSITION_H_ */
