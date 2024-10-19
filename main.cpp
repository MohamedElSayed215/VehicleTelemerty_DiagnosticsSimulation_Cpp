
#include "Vechile.hpp"
int	main(int argc, char **argv)
{   
    srand(time((0))) ; 
    
    Vechile MyCar ;
    while (1) {
        std::cout<<"----------------------------------\n";
        MyCar.Display_Issues();
        MyCar.Update_Sensors();
        sleep(2) ; 
    }
    
     
        return 0;
}
