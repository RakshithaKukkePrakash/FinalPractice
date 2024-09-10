/*
 * Temperature.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_
#include <cstdint>
#include <iostream>
#include <memory>
#include "Measurement.h"
class Temperature: public Measurement
{
	float temperature;
public:
	Temperature( uint16_t timestamp,float temperature);
	float getTemperature() const;
	std::string toString() const;
	static std::shared_ptr<Temperature> fromString(uint16_t timestamp, std::string value);
	static Temperature* toType(Measurement* ptr);
	virtual ~Temperature();
};

#endif /* TEMPERATURE_H_ */
