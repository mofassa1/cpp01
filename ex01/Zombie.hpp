#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
    private:
        std::string name;

    public:
        void    announce( void );
        Zombie();
        void    setname(std::string Name);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif