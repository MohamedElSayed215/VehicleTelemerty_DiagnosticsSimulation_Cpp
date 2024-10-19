#include "ECU.hpp"
#include "Sensors.hpp"
void ECU::Adaptive_Cruise_Control()
{
    if (TemperatureSensor::Get_Readings()>=100)
    {   
        /*Using Brakes to Stop ! */
        SpeedSensor::Set_Simulated_Value(0) ; 
    }
    else 
    {   
        /*No Change in Speed ! */
        SpeedSensor::Set_Simulated_Value(SpeedSensor::Get_Readings()) ; 
    }
    if (RadarSensor::Get_Readings()<=30 )
    {
        RadarSensor::Set_Status_Detection(true) ;
        SpeedSensor::Set_Simulated_Value(20) ; 
 
    }
    
}