#include "Zombie.hpp"

int main(void){
    Zombie *zombie = newZombie("junior");
    zombie->announce();

    randomChump("peixoto");
    delete zombie;
}