/*
 * WeeklyCourse.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "WeeklyCourse.h"



WeeklyCourse::~WeeklyCourse()
{
	// TODO Auto-generated destructor stub
}

WeeklyCourse::WeeklyCourse(std::string majorStr, unsigned int courseKey,
		std::string title, float creditPoints,
		Poco::DateTime::DaysOfWeek dayOfWeek, Poco::Data::Time startTime,
		Poco::Data::Time endTime):Course( majorStr,courseKey, title,
				creditPoints), dayOfWeek(dayOfWeek), startTime(startTime), endTime(endTime)
{
}
