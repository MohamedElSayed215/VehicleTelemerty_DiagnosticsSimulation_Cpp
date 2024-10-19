#pragma once
#include "Daignostics.hpp"
#include "ECU.hpp"
#include "Update.hpp"
class Vechile : public ECU , public Daignostics , public Update      
{   private:         
            Vechile(Vechile&&);
            Vechile(const Vechile&) ;
    public:
            Vechile() ;
              
} ;
