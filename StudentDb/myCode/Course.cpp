/*
 * Course.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "Course.h"
using namespace std;
std::map<unsigned char, std::string> Course::majorById ={{'A', "Automation"}, {'E', "Embedded"},
		{'P', "Power"},{'C', "Communications"}};
Course::Course(std::string majorStr, unsigned int courseKey, std::string title,
		float creditPoints): courseKey(courseKey), title(title),
				creditPoints(creditPoints)
{

	for (const auto &pair : majorById)
	{
		if(majorStr == pair.second)
		{
			this->major = pair.first;
		}
	}

}

Course::~Course()
{
	// TODO Auto-generated destructor stub
}

