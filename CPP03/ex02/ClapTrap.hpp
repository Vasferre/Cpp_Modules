#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
protected:
	string name;
	unsigned hit_points;
	unsigned energy_points;
	unsigned attack_damage;

	bool Energy();
	bool Alive();

public:
	void attack(const string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap(string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &assign);
};

#endif