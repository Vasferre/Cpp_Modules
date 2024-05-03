#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

std::cout;
std::endl;

class HumanB{

        std::string name;
        weapon *weapon;
    public:
      HumanA(std::string name, weapon &weapon);
      void attack(void);
      void setWeapon(weapon &weapon);
};
#endif