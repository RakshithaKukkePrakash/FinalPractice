/*
 * ResistorConnection.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef RESISTORCONNECTION_H_
#define RESISTORCONNECTION_H_
#include <memory>
#include <list>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Resistor.h"
class ResistorConnection: public Resistor
{
protected:
	std::list <std::shared_ptr<Resistor>> resistors;
public:
	ResistorConnection(std::string name);
	char separator() const;
	std::string getName();
	ResistorConnection& operator+=(const std::shared_ptr<Resistor>& resistor);
	virtual ~ResistorConnection();
};

#endif /* RESISTORCONNECTION_H_ */
