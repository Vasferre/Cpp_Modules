#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	cout << "ScavTrap: Default Constructor called" << endl;
}

ScavTrap::~ScavTrap()
{
	cout << this->name << "\e[0;33m destroyed\e[0m" << endl;
}

void ScavTrap::attack(const string &target)
{
	if (!Energy())
	{
		cout << "ScavTrap: " << name << " is out of energy!" << endl;
		return;
	}
	cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << endl;
	energy_points -= 1;
}

void ScavTrap::guardGate()
{
	cout << "ScavTrap: " << name << " is now in Gate keeper mode." << endl;
}