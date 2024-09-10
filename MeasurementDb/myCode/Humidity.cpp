/*
 * Humidity.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "Humidity.h"


Humidity::Humidity(uint16_t timestamp, float humidity): Measurement(timestamp),
humidity(humidity)
{
}

float Humidity::getHumidity() const
{
	return this->humidity;
}

std::string Humidity::toString() const
{
	return "Humidity: " +  std::to_string(this->humidity) + "%";
}

std::shared_ptr<Humidity> Humidity::fromString(uint16_t timestamp,
		std::string value)
{
	std::shared_ptr<Humidity> temp = std::make_shared<Humidity>(timestamp, std::atol(value.c_str()));


	return temp;
}

//Humidity* Humidity::toType(Measurement *ptr)
//{
//}


Humidity::~Humidity()
{
}

