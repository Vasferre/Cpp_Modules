#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	guarding_gate = false;
	std::cout << "\e[0;33m ScavTrap: Default Constructor called\e[0m" << std::endl;

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	guarding_gate = false;
	std::cout << "\e[0;33m ScavTrap: Constructor called\e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
	this->guarding_gate = copy.guarding_gate;
	std::cout << "\e[0;33m ScavTrap: Copy Constructor called\e[0m" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign) {
	ClapTrap::operator=(assign);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << "\e[0;33m Scavtrap: destroyed\e[0m" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (!Alive()){
		std::cout << "ScavTrap " << name << " died!" << std::endl;
		return;
	}
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