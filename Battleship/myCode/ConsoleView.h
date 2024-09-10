/*
 * ConsoleView.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef CONSOLEVIEW_H_
#define CONSOLEVIEW_H_
#include "Board.h"
#include <iostream>
#include <cstdlib>
class ConsoleView
{
	Board* board;
public:
	ConsoleView(Board* board);
	void print();
	virtual ~ConsoleView();
};

#endif /* CONSOLEVIEW_H_ */
