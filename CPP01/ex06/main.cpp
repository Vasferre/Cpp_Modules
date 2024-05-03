#include "harl.hpp"

int main (int argc, char **argv)
{
    harl harl;

    if (argc != 2 || !argv[1])
    {
        cerr << "invalid arguments!" << endl;
        cout << "./harlFilter <level>\nlevels: DEBUG, INFO, WARNING, ERROR" << endl;
        return EXIT_FAILURE;
    }
    harl.complain(argv[1]);
    return EXIT_SUCCESS;
}