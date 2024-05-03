#include "Harl.hpp"

int main(void)
{
    std::string input;
    Harl harl;

    while(!input.empty())
    {
        cout << "nLevels: DEBUG | INFO | WARNING | ERROR\n" << endl;
        getline(std::cin, input);
        harl.complain(input);

    }
    return EXIT_SUCCESS;
}