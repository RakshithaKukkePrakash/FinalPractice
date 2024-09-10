/*
 * StudentDb.h
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#ifndef STUDENTDB_H_
#define STUDENTDB_H_
#include <memory>
#include <map>
#include <iostream>
#include "Student.h"
#include "Course.h"
class StudentDb
{
	std::map<int, Student> students;
	std::map<int, std::unique_ptr<const Course>> courses;
public:
	StudentDb();
	void includeCourse();
	virtual ~StudentDb();
};

#endif /* STUDENTDB_H_ */
