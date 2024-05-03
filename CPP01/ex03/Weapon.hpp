#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class weapon {

        std::string type;
    public:
        weapon(std::string type);
        const std::string &getType(void) const;
        void setType(std::string type);
};
#endif
