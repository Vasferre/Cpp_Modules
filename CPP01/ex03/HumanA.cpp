#include "HumanA.hpp"

HumanA::HumanA(std::string name, weapon &weapon) : name(name), weapon(weapon)
{}

void    HumanA::attack(void)
{
    cout << this->name << "attack this" << this->weapon.getType() << endl;
}