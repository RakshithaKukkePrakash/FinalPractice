/*
 * SimpleUI.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "SimpleUI.h"
using namespace std;
SimpleUI::SimpleUI(StudentDb &db):db(db)
{
}

void SimpleUI::run()
{
	int choice = 0;
	cout<< "Select one of the below options"<<endl;
	cout << "1. Add new Course"<< endl<< "2. List courses"<<endl;
	cout << "3. Add new Student"<< endl<< "4. Add enrollment"<<endl;
	cout << "5. Print student"<< endl<< "6. Search student"<<endl;
	cout << "7. Update student"<< endl<< "0. Exit"<<endl;
	cin >> choice;
	switch(choice){
		case 1:{
				addCourse();
			}
		break;
	}

}

void SimpleUI::addCourse()
{
	std::string majorStr;
	unsigned int courseKey;
	std::string title;
	float creditPoints;
	cout << "Enter major"<< endl;
	cin>> majorStr;
	cout<< "Course key"<<endl;
	cin >> courseKey;
	cout << "Course title"<< endl;
	cin >> title;
	cout << "Credit points"<<endl;
	cin >> creditPoints;

	char courseChoice;
	string startDate, endDate, startTime, endTime, dayOfWeek;
	cout<< "Select course to add: B for blocked, W for weekly"<<endl;
	cin >> courseChoice;
	if(courseChoice == 'B'){
		cout << "Course start date as DD.MM.YYYY"<< endl;
		cin>> startDate;
		cout<< "Course end date as DD.MM.YYYY"<<endl;
		cin >> endDate;
		cout << "Course start time as HH:MM"<< endl;
		cin >> startTime;
		cout << "Course end time as HH:MM"<<endl;
		cin >> endTime;
	}
	else if(courseChoice == 'W'){
		cout << "Day of week"<< endl;
		cin >> dayOfWeek;
		cout << "Course start time as HH:MM"<< endl;
		cin >> startTime;
		cout << "Course end time as HH:MM"<<endl;
		cin >> endTime;
	}
}

Poco::Data::Date SimpleUI::convertDate(const std::string date)
{

	int year, month, day;
	sscanf(date.c_str(), "%d %d %d", &year, &month, &day);
	Poco::Data::Date d(year, month, day);
	return d;
}

SimpleUI::~SimpleUI()
{
	// TODO Auto-generated destructor stub
}

