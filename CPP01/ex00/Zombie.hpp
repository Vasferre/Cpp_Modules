#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

using std::cout;
using std::endl;

class   Zombie{
    private:
        std::string name;
    public:
        void announce(void); 
        std::string getName();
        Zombie(std::string name);
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif