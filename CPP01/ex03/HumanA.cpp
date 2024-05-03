#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : name(name), weapon(weapon)
{}

void    HumanA::attack(void)
{
    cout << this->name << "attack this" << this->weapon.getType() << endl;
}