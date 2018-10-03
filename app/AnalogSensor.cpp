/**
 * @file    AnalogSensor.cpp
 * @author  Saimouli
 * @copyright GNU public license
 *
 * @brief Implementation for class AnalogSensor
 *
 */
#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

AnalogSensor::AnalogSensor(unsigned int samples) : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
    // smart pointer to prevent memory leaks
    std::unique_ptr<std::vector<int> > readings =
      std::make_unique<std::vector<int> >(mSamples, 10);
  double result = std::accumulate(readings->begin(), readings->end(), 0.0) /
                  readings->size();
  return result;
}


