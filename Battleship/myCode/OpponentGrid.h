/*
 * OpponentGrid.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef OPPONENTGRID_H_
#define OPPONENTGRID_H_

class OpponentGrid
{
	int rows;
	int columns;
public:
	OpponentGrid(int rows, int columns);
	int getRows() const;
	int getColumns() const;
	virtual ~OpponentGrid();
};

#endif /* OPPONENTGRID_H_ */
