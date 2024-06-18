#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{}

void    HumanA::attack(void)
{
    cout << this->name << " attack with " << this->weapon.getType() << endl;
}