#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their : " << weaponA.getType() << std::endl;
}
HumanA::HumanA(std::string NAME, Weapon  &theweapon):  weaponA(theweapon)
{
    this->name = NAME;
    std::cout << "HumanA Named " << this->name << " created " << std::endl; 
}

HumanA::~HumanA()
{
    std::cout << "HumanA Named " << this->name << " distractor called " << std::endl; 
}
