/*
 * Resistor.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef RESISTOR_H_
#define RESISTOR_H_
#include <iostream>

class Resistor
{
	std::string name;

public:
	Resistor(std::string name);
	std::string getName() const;
	virtual float nominalValue() const = 0;
	virtual float minimumValue() const = 0;
	virtual float maximumValue() const = 0;
	std::string toString() const;
	virtual ~Resistor();
};
std::ostream& operator<<(std::ostream& out, Resistor& resistor);
#endif /* RESISTOR_H_ */
