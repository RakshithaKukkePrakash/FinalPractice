#include "TestSensor.h"

TestSensor::TestSensor(const std::string &name,
        std::shared_ptr<Adjuster> adjustor): Sensor(name, adjustor){
}

void TestSensor::setRawReading(float value) {
    this->value = value;
}

float TestSensor::rawReading() const {
    return this->value;
}
