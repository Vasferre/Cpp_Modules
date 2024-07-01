#include "ScavTrap.hpp"

int main()
{
	ScavTrap vasco("vasco");
	ClapTrap peixoto("peixoto");
	 for (size_t i = 0; i < 11; i++)
	 {
		peixoto.attack("nothing");
	}
	peixoto.takeDamage(40000);
	std::cout << std::endl;

	for (size_t i = 0; i < 20; i++)
	{
	vasco.takeDamage(1);
	vasco.beRepaired(1);
	}

	vasco.attack("meow");
	vasco.guardGate();

	return 0;
}