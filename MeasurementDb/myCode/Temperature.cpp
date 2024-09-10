/*
 * Temperature.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "Temperature.h"

Temperature::Temperature(uint16_t timestamp, float temperature): Measurement(timestamp),
temperature(temperature)
{
}

float Temperature::getTemperature() const
{
	return this->temperature;
}

std::string Temperature::toString() const
{
	return "Temperature: " +  std::to_string(this->temperature) + "°C";
}

std::shared_ptr<Temperature> Temperature::fromString(uint16_t timestamp,
		std::string value)
{
	std::shared_ptr<Temperature> temp = std::make_shared<Temperature>(timestamp, std::atol(value.c_str()));


	return temp;
}

//Temperature* Temperature::toType(Measurement *ptr)
//{
//}


Temperature::~Temperature()
{
}

