#include "Sensors.hpp"
#include "RandomValues.hpp"
SpeedSensor::SpeedSensor()
{
    Speed = GetRandomValues(0, 300) ; 
}
BatterySensor::BatterySensor()
{
    Battery_Temperatrue=GetRandomValues(0, 500) ; 
    BatteryLevel=static_cast<Level>(GetRandomValues(static_cast<int>(Level::LOW), static_cast<int>(Level::HIGH)) ); 
}
RadarSensor::RadarSensor()
{
    Distance = GetRandomValues(0, 400) ; 
    (Distance>=20)? Object_Detection=false:true  ; 
}
TemperatureSensor::TemperatureSensor()
{
    Engine_Temperature = GetRandomValues(0, 500) ; 
}
float SpeedSensor::Get_Readings()
{
    return Speed;
}
float RadarSensor::Get_Readings()
{
    return Distance;
}
float TemperatureSensor::Get_Readings()
{
    return Engine_Temperature;
} 
float BatterySensor::Get_Readings()
{
    return Battery_Temperatrue;
}
bool RadarSensor::Get_Object_Detection()
{
    return Object_Detection;
}
Level BatterySensor::Get_Battery_Level()
{
    return BatteryLevel;
}
void SpeedSensor::Set_Simulated_Value(float s)
{
    Speed=s ; 
}
void RadarSensor::Set_Simulated_Value(float d)
{
    Distance= d ;
    (Distance>=20)? Object_Detection=false:true  ; 

}
void RadarSensor::Set_Status_Detection(bool status) 
{   
    Object_Detection = status ; 
}
void TemperatureSensor::Set_Simulated_Value(float t )
{
    Engine_Temperature = t ; 
}

void BatterySensor::Set_Simulated_Value(float t )
{
    Battery_Temperatrue = t ; 

}
void BatterySensor::Set_Battery_Level(Level l )
{
    BatteryLevel = l ; 
}

