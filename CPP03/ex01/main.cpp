#include "ScavTrap.hpp"

int main()
{
	ScavTrap vasco("vasco");
	ClapTrap peixoto("peixoto");
	 for (size_t i = 0; i < 11; i++)
	 {
		peixoto.attack("meow");
	}
	peixoto.takeDamage(40000);
	cout << endl;

	for (size_t i = 0; i < 20; i++)
	{
	vasco.takeDamage(1);
	vasco.beRepaired(1);
	}

	vasco.attack("the air");
	vasco.guardGate();

	return 0;
}