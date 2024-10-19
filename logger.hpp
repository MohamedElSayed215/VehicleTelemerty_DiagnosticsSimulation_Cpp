#pragma once
#include "Daignostics.hpp"
#include "ECU.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
class logger : public Daignostics , public ECU , public std::ofstream
{
    private : 
        
        logger(const std::string& filename );
    public :
        static logger& Create_Logger() 
        {
            static logger setter_log("vechile_logs.log") ;
            return setter_log;
        }
        logger Write_Logs(std::string& txt) 
        {
            *this<<txt<<std::endl ; 
        } 
        
    

} ;