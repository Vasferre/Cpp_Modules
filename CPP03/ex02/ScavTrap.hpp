#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool guarding_gate;
public:
	void attack(const std::string &target);
	void guardGate();

	ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap &operator=(const ScavTrap &assign);
	ScavTrap(std::string name);
	~ScavTrap();
};

#endif