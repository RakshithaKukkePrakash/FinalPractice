// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>
#include "ResistorPart.h"
#include "SerialResistorConnection.h"

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "Resistor2022SoSe started." << endl << endl;
	ResistorPart r("R1", 42, 5);
	SerialResistorConnection s1("R2");
	ResistorPart r2("R3", 1000, 10);
	ResistorPart r3("R4", 4700, 10);
	cout << r.toString()<< endl;
	s1 += std::make_shared<ResistorPart>("R3", 1000.0f, 10.0f);
	s1 += std::make_shared<ResistorPart>("R4", 4700, 10);

	cout << s1.getName() << s1<< endl;
	return 0;
}
