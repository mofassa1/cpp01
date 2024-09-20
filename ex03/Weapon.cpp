#include "Weapon.hpp"

void Weapon::setType(std::string newtype)
{
    this->type = newtype;
}

const std::string& Weapon::getType() 
{
    std::string &Type = this->type;

    return Type;
}

Weapon::Weapon(std::string Type)
{
    this->type = Type;
    std::cout << "weapon " << this->type  << " created" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "weapon " << this->type  << " distructor called" << std::endl;
}
