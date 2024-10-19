#include "RandomValues.hpp"
#include <iostream>
int	main(int argc, char **argv)
{
    
    int x = GetRandomValues(0,10) ; 

    std::cout<<x<<std::endl ; 
     x = GetRandomValues(0,9) ; 

    std::cout<<x<<std::endl ; 


  
    return 0;
}
