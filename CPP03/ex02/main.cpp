#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap vasco("vasco");
    FragTrap peixoto("peixoto");

    cout << endl;

	vasco.attack("Robert");
	peixoto.takeDamage(5);

	cout << endl;

	vasco.attack("peixoto");
	peixoto.takeDamage(1);

	cout << endl;

	vasco.attack("peixoto");
	peixoto.takeDamage(1);

	cout << endl;

	peixoto.beRepaired(7);

	cout << endl;

	vasco.attack("peixoto");
	peixoto.takeDamage(100);

	cout << endl;

	vasco.highFivesGuys();

	cout << endl;
}