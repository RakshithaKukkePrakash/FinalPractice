/*
 * Course.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef COURSE_H_
#define COURSE_H_
#include <memory>
#include <map>
#include <iostream>
class Course
{
	static std::map<unsigned char, std::string> majorById;
	unsigned int courseKey;
	std::string title;
	unsigned char major;
	float creditPoints;
public:
	Course(std::string majorStr, unsigned int courseKey, std::string title,
			float creditPoints);
	virtual ~Course()= 0;
};

#endif /* COURSE_H_ */
