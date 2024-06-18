#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}


void    HumanB::attack(void)
{
    cout << this->name << " attack with " << weapon->getType() << endl;
}