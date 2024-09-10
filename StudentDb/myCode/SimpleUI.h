/*
 * SimpleUI.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef SIMPLEUI_H_
#define SIMPLEUI_H_
#include "StudentDb.h"
#include "BlockCourse.h"
#include "WeeklyCourse.h"
#include <Poco/Data/Date.h>
#include <Poco/Data/Time.h>
class SimpleUI
{
	StudentDb& db;
public:
	SimpleUI(StudentDb& db);
	void run();
	void addCourse();
	Poco::Data::Date convertDate(const std::string date);
	virtual ~SimpleUI();
};

#endif /* SIMPLEUI_H_ */
