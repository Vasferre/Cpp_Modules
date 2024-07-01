#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap Vasco("Vasco");

	 ClapTrap peixoto("peixoto");
	 for (size_t i = 0; i < 11; i++)
	 {
	 	peixoto.attack("nothing");
	 }
	 peixoto.takeDamage(40000);
	 std::cout << std::endl;

	 for (size_t i = 0; i < 20; i++)
	 {
	 	Vasco.takeDamage(1);
	 	Vasco.beRepaired(1);
	 }

	Vasco.attack("meow");
	Vasco.highFivesGuys();

	return 0;
}