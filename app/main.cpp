/**
 * @file    main.cpp
 * @author  saimouli
 * @copyright GNU public license
 *
 * @brief Main file to test the implementation of AnalogSensor
 *
 */
#include <iostream>
#include <AnalogSensor.hpp>

int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if ( terminator ) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
