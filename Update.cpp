#include "Update.hpp"
#include "RandomValues.hpp"
#include "Sensors.hpp"
void Update::Update_Sensors() 
{
    SpeedSensor::Set_Simulated_Value(GetRandomValues(0, 300)) ; 
    BatterySensor::Set_Simulated_Value(GetRandomValues(0, 500)) ;
    RadarSensor::Set_Simulated_Value(GetRandomValues(0, 126)) ; 
     
}