#include "Daignostics.hpp"
#include "Sensors.hpp"
#include <iostream>
void Daignostics::Display_Issues()
{
    if(! static_cast<int>(BatterySensor::Get_Battery_Level()) )
    {   
        std::cout<<"Battery Level is Low ! \n" ; 
    }
    if(RadarSensor::Get_Object_Detection()==true)
    {
        std::cout<<"Some Object is Detected ! .. Reduce your Speed !\n"; 
    }
    if(TemperatureSensor::Get_Readings()>=120)
    {
        std::cout<<"There is overheating in Engine ! \n" ; 
    }
    if(BatterySensor::Get_Readings()>=100)
    {
        std::cout<<"Battery Temperature is Arrived up to 100 !   \n";
    }
    
    
}
