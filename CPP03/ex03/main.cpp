#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap vasco("vasco");
	vasco.whoAmI(); 
	cout << endl;

    DiamondTrap peixoto("peixoto");

	cout << endl;

	vasco.whoAmI();

	cout << endl;

	peixoto.whoAmI();

	cout << endl;

	vasco.attack("peixoto");
	peixoto.takeDamage(10);

	cout << endl;

	peixoto.beRepaired(5);

	cout << endl;

}