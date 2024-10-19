#include "Update.hpp"
#include "RandomValues.hpp"
#include "Sensors.hpp"
 void Update::Update_Sensors() 
{   
    
    SpeedSensor::Set_Simulated_Value(GetRandomValues(0, 199)) ; 
    BatterySensor::Set_Simulated_Value(GetRandomValues(0, 119)) ;
    RadarSensor::Set_Simulated_Value(GetRandomValues(0, 79)) ;
    TemperatureSensor::Set_Simulated_Value(GetRandomValues(0, 99)) ; 
    BatterySensor::Set_Battery_Level(GetRandomValues(0, 99)) ; 

}