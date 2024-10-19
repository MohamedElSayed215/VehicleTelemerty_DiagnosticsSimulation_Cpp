#include "RandomValues.hpp"
#include <cstdlib>
#include <random>
int GetRandomValues(int min,int max) 
{   
    srand(time(nullptr)) ;

    return  (( rand() % (max - min +1 ) + min ));  


}