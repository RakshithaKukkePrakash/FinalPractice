/*
 * ConsoleView.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "ConsoleView.h"

using namespace std;
ConsoleView::ConsoleView(Board *board): board(board)
{
}

void ConsoleView::print()
{
	OwnGrid ow = board->getOwnGrid();
	int owRows= ow.getRows();
	int owCol= ow.getColumns();

	OpponentGrid op = board->getOpponentGrid();
	int opRows= op.getRows();
	int opCol= op.getColumns();
	cout<< "  ";
	for(int rw=1; rw<= board->getRows(); rw++){
		cout<< rw ;
	}
	for(int rw=1; rw<= board->getRows(); rw++){
		cout<< rw ;
		for(int col= 0; col < board->getColumns(); col++){
			cout <<endl;
			cout<< (char) (rw + 'A' - 1);
			for(int i= 0; i< owRows; i++){
				cout << "~";
			}
			cout<< to_string(col+1+32);
			for(int i= 0; i< owRows; i++){
				cout << "~";
			}
		}
	}


}

ConsoleView::~ConsoleView()
{
}

