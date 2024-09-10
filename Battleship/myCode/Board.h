/*
 * Board.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef BOARD_H_
#define BOARD_H_
#include "OwnGrid.h"
#include "OpponentGrid.h"
class Board
{
	OwnGrid ownGrid;
	OpponentGrid opponentGrid;
public:
	Board(int rows, int columns);
	int getRows() const;
	int getColumns() const;
	OwnGrid& getOwnGrid();
	OpponentGrid& getOpponentGrid();
	virtual ~Board();
};

#endif /* BOARD_H_ */
