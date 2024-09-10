/*
 * ResistorPart.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef RESISTORPART_H_
#define RESISTORPART_H_
#include "Resistor.h"
#include <memory>
typedef std::shared_ptr<Resistor> ResistorPtr;
class ResistorPart: public Resistor
{
	float value;
	float tolerance;
public:
	ResistorPart(std::string name, float value,float tolerance);
	float nominalValue() const;
	float minimumValue() const;
	float maximumValue() const;
	virtual ~ResistorPart();
};

#endif /* RESISTORPART_H_ */
