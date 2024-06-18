#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main ()
{


    // {
    //     weapon club = Weapon("crude spiked club");
    //     HumanB Bob("Bob");
    //     Bob.setWeapon(club);
    //     Bob.attack();
    //     club.setType("some other type of club");
    //     Bob.attack();
    // }


    {
        Weapon club = Weapon("crude spiked club");
        HumanB Jim("Jim");
        Jim.setWeapon(club);
        Jim.attack();
        club.setType("some other type of club");
        Jim.attack();
    }
    return 0;

}