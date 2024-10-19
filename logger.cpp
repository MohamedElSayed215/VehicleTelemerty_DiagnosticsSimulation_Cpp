#include "logger.hpp"

logger::logger(const std::string & filename) : std :: ofstream(filename){}

void Adaptive_Cruise_Control()
{   
    Adaptive_Cruise_Control() ;
    logger& log_file=logger::Create_Logger() ;
    std::string text ="Adaptive Cruise Control is Running !" ; 
    log_file.Write_Logs( text);

}
void Display_Issues()
{   Display_Issues();
    logger& log_file=logger::Create_Logger() ;
    std::string text ="Display Issues is Running !" ; 
    log_file.Write_Logs( text);
}
