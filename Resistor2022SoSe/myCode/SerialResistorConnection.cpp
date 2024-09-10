/*
 * SerialResistorConnection.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "SerialResistorConnection.h"

SerialResistorConnection::SerialResistorConnection(std::string name):ResistorConnection(name)
{
}

char SerialResistorConnection::separator() const
{
	return '-';
}

float SerialResistorConnection::nominalValue() const
{
	float nom=0;
	for(auto list: resistors){
		nom+= list->nominalValue();
	}
	return nom;
}

float SerialResistorConnection::minimumValue() const
{
	float min = 0;
	for(auto list: resistors){
		min+= list->minimumValue();
	}
	return min;
}

float SerialResistorConnection::maximumValue() const
{
	float max = 0;
	for(auto list: resistors){
		max+= list->maximumValue();
	}
	return max;
}

SerialResistorConnection::~SerialResistorConnection()
{
	// TODO Auto-generated destructor stub
}

