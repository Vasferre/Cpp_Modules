#include "FragTrap.hpp"

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	cout << "FragTrap: Default Constructor called" << endl;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap: Destructor called" << endl;
}

void FragTrap::highFivesGuys()
{
	cout << "FragTrap " << name << " high fives everybody 🙏 (yes, this is a high five)." << endl;
}