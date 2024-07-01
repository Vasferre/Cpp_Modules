# include "ScavTrap.hpp"
ScavTrap::ScavTrap () {}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	this->guarding_gate = copy.guarding_gate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	this->guarding_gate = false;
	std::cout << "\e[0;33m Scavtrap: Default Constructor called\e[0m" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;33mScavtrap: destructor called\e[0m" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->name = assign.name;
	this->hit_points = assign.hit_points;
	this->energy_points = assign.energy_points;
	this->attack_damage = assign.attack_damage;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (!Energy())
	{
		std::cout << "ScavTrap: " << name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
	energy_points -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << name << " is now in Gate keeper mode." << std::endl;
}