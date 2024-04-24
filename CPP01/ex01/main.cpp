#include "Zombie.hpp"

int main (void){

    int i = 0;
    Zombie *zombies = zombieHorde(10, "Peixoto");

    while (i < 10)
        {
            zombies[i].announce(i);
            i++;
        }
    delete [] zombies;
}