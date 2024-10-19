#pragma once 
enum class Level
{
    LOW,
    MED,
    HIGH
};
class Sensor  
{   
    public: 
        
        virtual float Get_Readings () = 0;
        virtual void Set_Simulated_Value(float) = 0 ; 
        
};


class SpeedSensor : public Sensor
{
    private:
        float Speed ;
        
    public :
        float Get_Readings() ;
        void Set_Simulated_Value(float) ; 
        SpeedSensor();


}; 
class RadarSensor : public Sensor
{
    private:
        float Distance ; 
        bool Object_Detection ;
         
    public : 
        float Get_Readings() ;
        void Set_Simulated_Value(float) ;
        void Set_Status_Detection(bool) ; 
        bool Get_Object_Detection() ;
        RadarSensor() ;
             
};
class TemperatureSensor : public Sensor
{
    private:
        float Engine_Temperature ;
        
    public : 
        float Get_Readings() ; 
        void Set_Simulated_Value(float) ;
        TemperatureSensor(); 
             

}; 
class BatterySensor : public Sensor
{
    private : 
        float Battery_Temperatrue ; 
        Level BatteryLevel ;
        
    public :
        float Get_Readings() ;
        void Set_Simulated_Value(float) ; 
        void Set_Battery_Level(Level) ;
        Level Get_Battery_Level() ; 
        BatterySensor();     
};

