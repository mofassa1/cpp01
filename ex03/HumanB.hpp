#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
class HumanB
{
    private:
        std::string name;
        Weapon      *weaponB;

    public:
        void setWeapon(Weapon &weapon);
        void attack();
        HumanB(std::string NAME);
        ~HumanB();
};




#endif