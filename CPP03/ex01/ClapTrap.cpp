#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) : name(name)
{
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	cout << "Field Constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	cout << "Copy Constructor called of ClapTrap" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "Destructor called" << endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	this->name = assign.name;
	this->hit_points = assign.hit_points;
	this->energy_points = assign.energy_points;
	this->attack_damage = assign.attack_damage;
	return *this;
}

void ClapTrap::attack(const string &target)
{
	if (!isAlive())
		cout << "ClapTrap " << name << " is dead!" << endl;
	else if (!haveEnergy())
		cout << "ClapTrap " << name << " is out of energy!" << endl;
	else
	{
		cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << endl;
		energy_points -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= amount)
	{
		hit_points = 0;
		cout << "ClapTrap " << name << " is dead!" << endl;
		return;
	}
	hit_points -= amount;
	cout << "ClatTrap " << name << " take damage for " << amount << " hit points" << endl;
	cout << "Current health: " << hit_points << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!isAlive())
		cout << "ClapTrap " << name << " is dead!" << endl;
	else if (!haveEnergy())
		cout << "ClapTrap " << name << " is out of energy!" << endl;
	else
	{
		hit_points += amount;
		cout << "ClatTrap " << name << " repairs itself for " << amount << " hit points" << endl;
		cout << "Current health: " << hit_points << endl;
		energy_points -= 1;
	}
}

bool ClapTrap::haveEnergy()
{
	return (energy_points > 0);
}

bool ClapTrap::isAlive()
{
	return (hit_points > 0);
}