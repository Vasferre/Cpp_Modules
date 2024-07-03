#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "\e[0;33m Claptrap: Constructor with string called\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33m Claptrap: copy Constructor called\e[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;33m Claptrap : " << name << "Destructor called\e[0m" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	this->name = assign.name;
	this->hit_points = assign.hit_points;
	this->energy_points = assign.energy_points;
	this->attack_damage = assign.attack_damage;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (!Alive())
		std::cout << "ClapTrap " << name << " is dead!" << std::endl;
	else if (!Energy())
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
		energy_points -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= amount)
	{
		hit_points = 0;
		std::cout << "ClapTrap " << name << " died!" << std::endl;
		return;
	}
	hit_points -= amount;
	std::cout << "ClatTrap " << name << " take damage for " << amount << " hit points" << std::endl;
	std::cout << "Current health: " << hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!Alive())
		std::cout << "ClapTrap " << name << " died!" << std::endl;
	else if (!Energy())
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
	else
	{
		hit_points += amount;
		std::cout << "ClatTrap " << name << " repairs itself for " << amount << " hit points" << std::endl;
		std::cout << "health: " << hit_points << std::endl;
		energy_points -= 1;
	}
}

bool ClapTrap::Energy()
{
	return (energy_points > 0);
}

bool ClapTrap::Alive()
{
	return (hit_points > 0);
}