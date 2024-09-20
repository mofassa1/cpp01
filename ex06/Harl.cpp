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
    std::cout << "[INFO]" << std::endl;
    std::cout << "this is info " << std::endl;
}

void Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "this is debug " << std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "this is warning !!! " << std::endl;
}

void Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is error !!!!" << std::endl;
}

void Harl::complain( std::string level)
{
    std::string  levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            break;
        }
        else if (i == 3)
        {
            std::cerr << level <<" not exist !!!!!!!!!!" << std::endl;
            return ;
        }
    }

    switch (level[0])
    {
        case 'D':
            debug();
            info();
            warning();
            error();
            break;
        case 'I':
            info();
            warning();
            error();
            break;
        case 'W':
            warning();
            error();
            break;
        case 'E':
            error();
            break;
    }
}
