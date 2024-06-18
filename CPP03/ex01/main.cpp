#include "ScavTrap.hpp"

int main()
{
    ScavTrap vasco("vasco");
    ScavTrap peixoto("peixoto");

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

	vasco.guardGate();

	cout << endl;
}