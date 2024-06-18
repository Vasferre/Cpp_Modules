#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

class Zombie{
    private:
        std::string name;
    public:
        std::string getName();
        void setName(std::string name);
        void announce(int i);
        Zombie();
        
};
Zombie* zombieHorde(int n, std::string name);