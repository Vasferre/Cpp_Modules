#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	void highFivesGuys();

	FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap &operator=(const FragTrap &assign);
	FragTrap(std::string name);
	~FragTrap();
};

#endif