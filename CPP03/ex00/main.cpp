#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Peixoto("peixoto");
	ClapTrap vasco("vasco");

	cout << endl;
	
	Peixoto.attack("vasco");
	vasco.takeDamage(5);

	cout <<  endl;

	vasco.beRepaired(5);

	cout << endl;

	vasco.attack("peixoto");
	Peixoto.takeDamage(10);

	cout << endl;
}