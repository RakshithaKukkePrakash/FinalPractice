/*
 * ResistorConnection.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "ResistorConnection.h"
using namespace std;

ResistorConnection::ResistorConnection(std::string name): Resistor(name)
{
}

char ResistorConnection::separator() const
{
	return ',';
}

std::string ResistorConnection::getName()
{
	ostringstream outString;
	outString <<Resistor::getName() <<"[";
	for(auto& itr: this->resistors){
		outString << itr->getName() << separator();
	}

	outString << "]";
	return outString.str();
}

ResistorConnection& ResistorConnection::operator +=(
		const std::shared_ptr<Resistor> &resistor)
{
	this->resistors.push_back(resistor);
	return *this;
}

ResistorConnection::~ResistorConnection()
{
}

