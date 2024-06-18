#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

using std::cout;
using std::endl;

class HumanB{

        std::string name;
        Weapon *weapon;
    public:
      HumanB(std::string name);
      void attack(void);
      void setWeapon(Weapon &weapon);
};
#endif