/*
 * Board.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "Board.h"


Board::Board(int rows, int columns):ownGrid(rows, columns),
opponentGrid(rows, columns)
{
}

int Board::getRows() const
{
	return ownGrid.getRows();
}

int Board::getColumns() const
{
	return ownGrid.getColumns();
}

OwnGrid& Board::getOwnGrid()
{
	return this->ownGrid;
}

OpponentGrid& Board::getOpponentGrid()
{
	return this->opponentGrid;
}

Board::~Board()
{
}

