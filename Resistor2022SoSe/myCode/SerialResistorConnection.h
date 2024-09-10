/*
 * SerialResistorConnection.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef SERIALRESISTORCONNECTION_H_
#define SERIALRESISTORCONNECTION_H_
#include "ResistorConnection.h"

class SerialResistorConnection: public ResistorConnection
{
public:
	SerialResistorConnection(std::string name);
	char separator() const;
	float nominalValue() const;
	float minimumValue() const;
	float maximumValue() const;
	virtual ~SerialResistorConnection();
};

#endif /* SERIALRESISTORCONNECTION_H_ */
