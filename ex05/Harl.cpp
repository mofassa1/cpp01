#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl destructor called" << std::endl;
}

void Harl::info()
{
    std::cout << "this is info " << std::endl;
}

void Harl::debug()
{
    std::cout << "this is debug " << std::endl;
}

void Harl::warning()
{
    std::cout << "this is warning !!! " << std::endl;
}

void Harl::error()
{
    std::cout << "This is error !!!!" << std::endl;
}

void Harl::complain( std::string level)
{
    std::string  levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functionPtrTable[4])();

    functionPtrTable[0] = &Harl::debug;
    functionPtrTable[1] = &Harl::info;
    functionPtrTable[2] = &Harl::warning;
    functionPtrTable[3] = &Harl::error;
    for (size_t i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functionPtrTable[i])();
            return ;
        }
    }
    std::cout << level<< " level not exist" << std::endl;
}
