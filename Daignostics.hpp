#pragma once 
// CHECEKR ! 
#include "Sensors.hpp"
#include <iostream>
#include "RandomValues.hpp"

/*Monitoring For All Issues */
class Daignostics : protected RadarSensor , protected TemperatureSensor , protected SpeedSensor , protected BatterySensor
{   
    public : 
        virtual void Display_Issues();
       
}; 