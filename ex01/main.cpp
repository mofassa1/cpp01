#include "Zombie.hpp"

int main()
{
	Zombie		*horde;
	int			nbZombies;
	std::string	name = "zombie";

		nbZombies = 15;

	
	horde = zombieHorde(nbZombies, name);

	for (int i = 0; i < nbZombies; i++)
		horde[i].announce();

	delete [] horde;
	std::cout << "The horde of " << nbZombies << " zombies has been eradicated." << std::endl;
	return (0);
}
