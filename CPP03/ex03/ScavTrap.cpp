#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	cout << "ScavTrap: Default Constructor called" << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap: Destructor called" << endl;
}

void ScavTrap::attack(const string &target)
{
	if (!haveEnergy())
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