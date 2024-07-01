# include "FragTrap.hpp"

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	cout << "FragTrap: Default Constructor called" << endl;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap: Destructor called" << endl;
}

void FragTrap::highFivesGuys()
{
	cout << "FragTrap " << name << " high fives everybody!" << endl;
}