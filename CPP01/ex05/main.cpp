#include "Harl.hpp"

int main(void)
{
    std::string input;
    Harl harl;

    do
    {
        cout << "nLevels: DEBUG | INFO | WARNING | ERROR\n" << endl;
        getline(std::cin, input);
        harl.complain(input);

    } while (!input.empty());


    return EXIT_SUCCESS;
}