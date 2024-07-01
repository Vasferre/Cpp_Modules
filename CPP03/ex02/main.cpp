#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap Vasco("Vasco");

	 ClapTrap peixoto("peixoto");
	 for (size_t i = 0; i < 11; i++)
	 {
	 	peixoto.attack("meow");
	 }
	 peixoto.takeDamage(40000);
	 cout << endl;

	 for (size_t i = 0; i < 20; i++)
	 {
	 	Vasco.takeDamage(1);
	 	Vasco.beRepaired(1);
	 }

	Vasco.attack("the air");
	Vasco.highFivesGuys();

	return 0;
}