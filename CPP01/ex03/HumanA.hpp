#ifndef HUMANA_H
#endif HUMANA_H

#include <iostream>
#include "weapon.hpp"

std::cout;
std::endl;

class HumanA {

        std::string name;
        weapon &weapon;
    public:
      HumanA(std::string name, weapon &weapon);
      void attack(void);
};
#endif