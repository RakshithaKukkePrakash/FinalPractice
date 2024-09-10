/*
 * Measurement.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "Measurement.h"
using namespace std;

Measurement::Measurement(uint16_t timestamp): timestamp(timestamp)
{
}

uint16_t Measurement::toTimestamp(int hour, int minute)
{
	if((hour < 0  && hour >23)|| (minute < 0 && minute >59)) {
		throw std::invalid_argument("Invalid hour and minutes");
	}
	return hour*60 + minute;
}

std::string Measurement::toTimeOfDay(uint16_t timestamp)
{

	uint16_t hr, min;
	std::string time;
	std::string hrS, minS;
	hr = timestamp / 60;
	min = timestamp % 60;
	hrS = std::to_string(hr);
	minS = std::to_string(min);
	if(hr<10){
		hrS = '0' + std::to_string(hr);
	}
	if(min <10){
		minS = '0' + std::to_string(min);
	}
	return hrS+ ":"+ minS+ " ";
}

long Measurement::getTimestamp() const
{
	return this->timestamp;
}


std::ostream& operator <<(std::ostream &lhs, Measurement &rhs)
{
	lhs << rhs.toTimeOfDay(rhs.getTimestamp()) << " " << rhs.toString();
	return lhs;
}

void Measurement::parseLine(const std::string &line, uint16_t &timestamp,
		std::string &type, std::string &remainder)
{
	int pos= line.find(";");
	timestamp = std::atol(line.substr(0,pos).c_str());
	int pos2 = line.find(":");
	type = line.substr(pos+1, pos2-pos-1);
	remainder = line.substr(pos2+1, line.length());
}



Measurement::~Measurement()
{
}

