#include <iostream>
#include "Vechile.hpp"
int	main(int argc, char **argv)
{   
    
    Vechile MyCar ;
    MyCar.Update_Sensors() ; 
    MyCar.Display_Issues();
    MyCar.Adaptive_Cruise_Control() ; 
        return 0;
}
