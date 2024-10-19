#pragma once 
// CHECEKR ! 
#include "Sensors.hpp"
#include "RandomValues.hpp"

/*Monitoring For All Issues */
class Daignostics : protected RadarSensor , protected TemperatureSensor , protected SpeedSensor , protected BatterySensor
{   
    public : 
        void Display_Issues();
        //void Update();  
       
}; 