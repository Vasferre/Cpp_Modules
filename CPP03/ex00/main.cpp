#include "ClapTrap.hpp"

int main()
{
	ClapTrap Vasco("vasco");
	ClapTrap Peixoto("Peixoto");

	for (size_t i = 0; i < 11; i++)
	{
		Vasco.attack("nothing");
	}
	Vasco.takeDamage(40000);
	std::cout << std::endl;

	for (size_t i = 0; i < 20; i++)
	{
		Peixoto.takeDamage(1);
		Peixoto.beRepaired(1);
	}

	return 0;
}