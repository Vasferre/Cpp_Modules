# include "FragTrap.hpp"
FragTrap::FragTrap() {
	std::cout << "\e[0;33m Fragtrap: Default Constructor called\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "\e[0;33m Fragtrap: Constructor with string called\e[0m" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap: Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\e[0;33m Fragtrap: Destructor called\e[0m" << std::endl;
}


FragTrap &FragTrap::operator=(const FragTrap &assign) {
	std::cout << "FragTrap: Assignation operator called" << std::endl;
	this->name = assign.name;
	this->hit_points = assign.hit_points;
	this->energy_points = assign.energy_points;
	this->attack_damage = assign.attack_damage;
	return *this;
}
void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " high fives everybody!" << std::endl;
}

