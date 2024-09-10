/*
 * ResistorPart.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "ResistorPart.h"


ResistorPart::~ResistorPart()
{
	// TODO Auto-generated destructor stub
}

ResistorPart::ResistorPart(std::string name, float value, float tolerance): Resistor(name),
		value(value), tolerance(tolerance)
{
}

float ResistorPart::nominalValue() const
{
	return this->value;
}

float ResistorPart::minimumValue() const
{
	return this->value - (this->value* this->tolerance / 100);
}

float ResistorPart::maximumValue() const
{
	return this->value + (this->value * this->tolerance / 100);

}
