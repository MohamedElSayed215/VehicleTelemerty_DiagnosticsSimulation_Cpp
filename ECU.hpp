#pragma once 
/* Adaptive Cruise Control */
#include "Sensors.hpp"
class ECU : protected RadarSensor , protected TemperatureSensor , protected SpeedSensor , protected BatterySensor
{            
    public: 
        virtual void Adaptive_Cruise_Control() ; 
} ; 