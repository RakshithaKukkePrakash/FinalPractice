/*
 * MeasurementDb.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include <algorithm>
#include <fstream>
#include "Temperature.h"
#include "Humidity.h"
#include "MeasurementDb.h"
using namespace std;
MeasurementDb::MeasurementDb()
{
	// TODO Auto-generated constructor stub

}

void MeasurementDb::addMeasurement(const std::string &location,
		std::shared_ptr<Measurement> measurement)
{
	this->data[location].push_back(measurement);
}

void MeasurementDb::print()
{
	cout<<endl << "Content of database:" <<endl;
	for(auto vectData: data){

		for(auto meas: vectData.second){
			cout << vectData.first<< ": "<< meas->toTimeOfDay(meas->getTimestamp())
					<< meas->toString()<<endl;
		}
	}
}

void MeasurementDb::save(std::ostream &to)
{
	for(auto& meas: data){
		to << "[" << meas.first << "]" <<endl;
		for(auto vect: meas.second){
			to<< vect->getTimestamp() << ";" << vect->toString()<<endl;
		}
	}

}

void MeasurementDb::load(std::istream &from)
{
	data.clear();
	uint16_t timestamp;
	std::string line, location, type, rem;

	while(std::getline(from, line)){
		if(line.find("]") != string::npos){
			auto pos = line.find("]");
			location = line.substr(1, pos-1);
		}
		else {

			Measurement::parseLine(line, timestamp, type, rem);
			if(type == "Temperature"){
				std::shared_ptr<Temperature> tem = Temperature::fromString(timestamp, rem);
				this->addMeasurement(location, tem);
			}
			else if(type == "Humidity"){
				std::shared_ptr<Humidity> hum = Humidity::fromString(timestamp, rem);
				this->addMeasurement(location, hum);
			}
		}

	}


}

bool MeasurementDb::maximumTemperature(std::string &location,
		std::shared_ptr<Measurement> &measurement)
{
	return true;
}

MeasurementDb::~MeasurementDb()
{
	// TODO Auto-generated destructor stub
}

