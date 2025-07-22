#include "Harl.hpp"

enum LogLevel 
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    INVALID_LEVEL
};

LogLevel getLogLevel(const std::string& level) 
{
    if (level == "DEBUG")   return DEBUG;
    if (level == "INFO")    return INFO;
    if (level == "WARNING") return WARNING;
    if (level == "ERROR")   return ERROR;
    return INVALID_LEVEL;
}

int main (int count, char **value)
{
    Harl harl;
    std::string input;

    std::cout << "Enter one of the levels: DEBUG, INFO, WARNING, ERROR, or type EXIT to quit." << std::endl;
    
    while(42)
    {
        std::cout << "> " <<std::endl;
        std::getline(std::cin, input);
        
        if(input == "EXIT")
            exit(0);

        switch (getLogLevel(input)) {
            
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                break;
            case 0:
                harl.complain("DEBUG");
                break;
            case 1:
                harl.complain("INFO");
                break;
            case 2:
                harl.complain("WARNING");
                break;
            case 3:
                harl.complain("ERROR");
                break;
        }
    }
    return(0);
}