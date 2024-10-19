#pragma once 
#include "Sensors.hpp"
#include "RandomValues.hpp"
class Update : protected RadarSensor , protected TemperatureSensor , protected SpeedSensor , protected BatterySensor
{
    public : 
        void Update_Sensors() ;
};