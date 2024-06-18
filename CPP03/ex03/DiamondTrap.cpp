#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	name = name;
	ClapTrap::name = name + "_clap_name";

	FragTrap::hit_points = 100;
	ScavTrap::energy_points = 50;
	FragTrap::attack_damage = 30;
	cout << "DiamondTrap: Default Constructor called" << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap: Destructor called" << endl;
}

void DiamondTrap::whoAmI()
{
	cout << "I am a DiamondTrap named " << name << ", ClapTrap name: " << ClapTrap::name << endl;
}