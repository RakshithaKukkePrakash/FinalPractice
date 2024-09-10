// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"
#include "Board.h"
#include "ConsoleView.h"
// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Battleship started." << endl << endl;
	Board board(10,10);
	ConsoleView cv(&board);
	cv.print();
	return 0;
}
