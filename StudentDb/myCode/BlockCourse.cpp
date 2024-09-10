/*
 * BlockCourse.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "BlockCourse.h"

BlockCourse::~BlockCourse()
{
	// TODO Auto-generated destructor stub
}

BlockCourse::BlockCourse(std::string majorStr, unsigned int courseKey, std::string title,
		float creditPoints, Poco::Data::Date startDate, Poco::Data::Date endDate,
		Poco::Data::Time startTime, Poco::Data::Time endTime):Course( majorStr,courseKey, title,
				creditPoints), startDate(startDate),
				endDate(endDate), startTime(startTime), endTime(endTime)
{
}
