#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string Name)
{
    this->name = Name;
}

Zombie::Zombie()
{
    this->name = "unown";
}

Zombie::~Zombie()
{
    std::cout << name << ": destroyed" << std::endl;
}
