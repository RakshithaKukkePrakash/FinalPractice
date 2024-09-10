/*
 * WeeklyCourse.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef WEEKLYCOURSE_H_
#define WEEKLYCOURSE_H_
#include <Poco/DateTime.h>
#include <Poco/Data/Time.h>
#include "Course.h"
class WeeklyCourse: public Course
{
	Poco::DateTime::DaysOfWeek dayOfWeek;
	Poco::Data::Time startTime;
	Poco::Data::Time endTime;
public:
	WeeklyCourse(std::string majorStr, unsigned int courseKey, std::string title,
			float creditPoints, Poco::DateTime::DaysOfWeek dayOfWeek,
			Poco::Data::Time startTime, Poco::Data::Time endTime);
	virtual ~WeeklyCourse();
};

#endif /* WEEKLYCOURSE_H_ */
