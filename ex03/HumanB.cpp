#include "HumanB.hpp"

void HumanB::attack()
{
    if (this->weaponB == NULL)
    {
        std::cout << this->name << " dose not have a weapon " << std::endl;
    }
    else
        std::cout << this->name << " attacks with their : " << this->weaponB->getType() << std::endl;
}

HumanB::HumanB(std::string NAME)
{
    this->name = NAME;
    weaponB = NULL;
    std::cout << "HumanB Named " << this->name << " created " << std::endl; 
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weaponB = &weapon;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Named " << this->name << " distractor called " << std::endl; 
}