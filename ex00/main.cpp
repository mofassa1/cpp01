#include "Zombie.hpp"

int main()
{
	Zombie	zombie("Zombie");
	Zombie	zombie1;
 	Zombie	*zombie2;

	std::cout << "============= stack =============" << std::endl;

	zombie.announce();
 
	randomChump("zooooombieeeeeeeeeeeee");

	std::cout << "============= heap ==============" << std::endl;

	zombie2 = newZombie("zombie2");
	zombie2->announce();
	delete(zombie2);

	return (0);
}
