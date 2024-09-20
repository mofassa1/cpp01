#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    std::cout << "zombie created !!!!!" << std::endl;
}

void Zombie::setname(std::string Name)
{
    this->name = Name;
}



Zombie::~Zombie()
{
    std::cout << name << ": destroyed" << std::endl;
}
