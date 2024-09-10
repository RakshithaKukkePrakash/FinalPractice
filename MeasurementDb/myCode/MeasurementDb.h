/*
 * MeasurementDb.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef MEASUREMENTDB_H_
#define MEASUREMENTDB_H_
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <memory>
#include <boost/algorithm/string.hpp>
#include "Measurement.h"

class MeasurementDb
{
	std::map<std::string, std::vector<std::shared_ptr<Measurement>>> data;

public:
	MeasurementDb();
	void addMeasurement(const std::string& location,std::shared_ptr<Measurement> measurement);
	void print();
	void save(std::ostream& to);
	void load(std::istream& from);
	bool maximumTemperature(std::string& location, std::shared_ptr<Measurement>& measurement);
	virtual ~MeasurementDb();
};

#endif /* MEASUREMENTDB_H_ */
