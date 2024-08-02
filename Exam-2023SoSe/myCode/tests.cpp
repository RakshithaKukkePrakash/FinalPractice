#include <iostream>
#include <cstdlib>
#include <memory>

using namespace std;

#include "TestSensor.h"
#include "LinearAdjuster.h"
#include "TableBasedAdjuster.h"
#include "SensorNetwork.h"
#include "DuplicateSensorName.h"

/**
 * Outputs the failedMessage on the console if condition is false.
 *
 * @param condition the condition
 * @param failedMessage the message
 */
void assertTrue(bool condition, string failedMessage) {
    if (!condition) {
        cout << failedMessage << endl;
    }
}

/**
 * Tests for the adjustor classes. (12 points)
 */
void adjusterTests() {

    /*
     * Values for subsequent tests.
     */
    float testValues[] = { -10, -1, 0, 1, 10 };

    /*
     * (1) Using the test values given above as samples, assert that a
     * NullAdjustor's adjust method returns the argument's value
     * unchanged.
     */
    NullAdjuster nAdj;
    for(float tVal : testValues){
        assertTrue(tVal == nAdj.adjust(tVal),"Null adjuster incorrect");
    }

    /*
     * (2) Using the test values given above as samples, assert that a
     * TableBasedAdjustor with a single breakpoint (0,0) returns
     * the same values as a NullAdjustor.
     */
    TableBasedAdjuster tAdj1;
    tAdj1.addBreakpoint(0,0);
    assertTrue(tAdj1.adjust(0) == nAdj.adjust(0),"Null-Table adjuster incorrect");

    /*
     * (3) Using the test values given above as samples, assert that a
     * TableBasedAdjustor with breakpoints (-100,-110), (0,0)
     * and (100,90) returns the given expected values.
     *
     * Remember (from your basic C/C++ courses) that floating
     * point calculations do not always yield exact results
     * (rounding errors due to using the binary system).
     * Take this into account when checking the result.
     */
    float expected[] = { -11, -1.1, 0, 0.9, 9 };
    TableBasedAdjuster tAdj;
    tAdj.addBreakpoint(-100,-110);
    tAdj.addBreakpoint(0,0);
    tAdj.addBreakpoint(100,-90);

    for(int i = 0; i< 5 ; i++){
        assertTrue(tAdj.adjust(testValues[i]) - expected[i] < 0.001 ,"Incorrect assert 1.3");
    }




}

/**
 * Tests for the sensor classes. (12 points)
 */
void sensorTests () {

    /*
     * Values for subsequent tests.
     */
    float testValues[] = { -10, -1, 0, 1, 10 };

    /*
     * (1) Using a TestSensor and the test values given above as samples,
     * assert that a (test) sensor with a NullAdjustor returns the raw
     * readings of a sensor as readings.
     */
    std::shared_ptr<Adjuster> adjuster = std::make_shared<NullAdjuster> ();
    TestSensor sensor("null", adjuster);
    for(int i = 0; i< 5 ; i++){
        sensor.setRawReading(testValues[i]);
        assertTrue(sensor.rawReading() == testValues[i] ,"Incorrect assert 2.1");
    }

    /*
     * (2) Using a TestSensor and the test values given above as samples,
     * assert that a (test) sensor with a LinearAdjustor returns the
     * expected readings. Test with 10 differently configured
     * LinearAdjustors for each test value for exhaustive testing
     * (50 "assertTrue" invocations in total).
     */
    for(int i = 0; i< 10 ; i++){
        std::shared_ptr<Adjuster> ladjuster = std::make_shared<LinearAdjuster> (i, i);
        TestSensor sensor("lAdj", ladjuster);
        for(int j = 10; j< 15 ; j++){
            float exp = j * i +i;
            sensor.setRawReading(j);
            assertTrue(sensor.reading() == exp,"Incorrect assert 2.2");
        }
    }
}

/**
 * Tests for the sensor network. (16 points)
 */
void networkTests() {
    /*
     * Create a sensor network with 10 TestSensors named
     * "Thermometer n" (with n being the number of the thermometer)
     * that have their readings set to values 20 + n * 0.05.
     */
    SensorNetwork sNet;
    std::shared_ptr<Adjuster> ladjuster = std::make_shared<LinearAdjuster> (1,0);
    for(int n = 0; n< 10; n++)
    {
        TestSensor sensor("Thermometer "+ n, ladjuster);
        sensor.setRawReading(20+n*0.05);
    }


    /*
     * (1) Assert that adding a sensor with a name that is already
     * used by a sensor in the network throws a DuplicateSensorName
     * exception with the sensor's name as "what".
     */
    try{
        TestSensor sensor("Thermometer 3", ladjuster);
    }catch(std::invalid_argument& ex){
        std::cout<< ex.what();
    }

}

void allTests() {
    adjusterTests();
    sensorTests();
    networkTests();
}
