// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include <fstream>
// Add more standard header files as required
// #include <string>
#include "Measurement.h"
#include "Temperature.h"
#include "Humidity.h"
#include "MeasurementDb.h"

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
	cout << "MeasurementDb started." << endl << endl;
	Temperature measurement1(Measurement::toTimestamp(6, 0), -3);
	cout << measurement1.toString()<<endl;
	cout << measurement1.toTimeOfDay(measurement1.getTimestamp()) << measurement1;
	MeasurementDb meas;
	shared_ptr<Measurement> s1 = make_shared<Humidity> (Measurement::toTimestamp(8, 0), 80);
	shared_ptr<Measurement> s2 = make_shared<Temperature> (Measurement::toTimestamp(10, 5), 20);
	shared_ptr<Measurement> s3 = make_shared<Temperature> (Measurement::toTimestamp(12, 0), 22);
	shared_ptr<Measurement> s4 = make_shared<Humidity> (Measurement::toTimestamp(3, 34), 56);

	meas.addMeasurement("Bath", s1);
	meas.addMeasurement("Kitchen", s2);
	meas.addMeasurement("Kitchen", s3);
	meas.addMeasurement("Basement", s4);
	meas.print();

	ofstream writefile("data.txt", ios::trunc);

	if(writefile.is_open())
	{
		meas.save(writefile);

		writefile.close();
	}
	cout << "Read from file"<< endl;
	std::ifstream inFile("data.txt");
	if(inFile.is_open()){
		meas.load(inFile);
		meas.print();
	}
	return 0;
}
