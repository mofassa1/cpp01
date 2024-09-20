#include "Zombie.hpp"

std::string int_to_string(int i)
{
    std::stringstream ss;

    ss << i;
    return (ss.str());
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie;

    zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombie[i].setname(name + int_to_string(i));

    return (zombie);
}
