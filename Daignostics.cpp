#include "Daignostics.hpp"
void Daignostics::Display_Issues()
{
    if( BatterySensor::Get_Battery_Level()<=50 )
    {   
        std::cout<<"Battery Level is Low ! \n" ; 
    }
    if(RadarSensor::Get_Object_Detection()==true)
    {
        std::cout<<"Some Object is Detected ! .. Reduce your Speed !\n"; 
    }
    if(TemperatureSensor::Get_Readings()>=50)
    {
        std::cout<<"There is overheating in Engine ! \n" ; 
    }
    if(BatterySensor::Get_Readings()>=60)
    {
        std::cout<<"Battery Temperature is Arrived up to 60 !   \n";
    }
    
    
}
