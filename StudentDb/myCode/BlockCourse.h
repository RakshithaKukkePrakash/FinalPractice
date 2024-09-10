/*
 * BlockCourse.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef BLOCKCOURSE_H_
#define BLOCKCOURSE_H_
#include <Poco/Data/Date.h>
#include <Poco/Data/Time.h>
#include "Course.h"
class BlockCourse: public Course
{
	Poco::Data::Date startDate;
	Poco::Data::Date endDate;
	Poco::Data::Time startTime;
	Poco::Data::Time endTime;
public:
	BlockCourse(std::string majorStr, unsigned int courseKey, std::string title,
			float creditPoints, Poco::Data::Date startDate, Poco::Data::Date endDate,
			Poco::Data::Time startTime, Poco::Data::Time endTime);
	virtual ~BlockCourse();
};

#endif /* BLOCKCOURSE_H_ */
