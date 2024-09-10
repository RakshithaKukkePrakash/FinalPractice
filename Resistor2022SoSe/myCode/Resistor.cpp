/*
 * Resistor.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "Resistor.h"


Resistor::Resistor(std::string name): name(name)
{
}

std::string Resistor::getName() const
{
	return this->name;
}

std::string Resistor::toString() const
{

	return getName() + "=" + std::to_string(nominalValue()) +" Ohm";
}

Resistor::~Resistor()
{
	// TODO Auto-generated destructor stub
}

std::ostream& operator <<(std::ostream &out, Resistor &resistor)
{
	out << resistor.toString();
	return out;
}
