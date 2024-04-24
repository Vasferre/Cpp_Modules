#include <iostream>
#include <cctype>

using std::cout;
using std::endl;

std::string string_upper(std::string arg)
{
    size_t i;

    i = 0;

    while(i < arg.length())
    {
        arg[i] = toupper(arg[i]);
        i++;
    }
    return(arg);
}


int main (int argc, char **argv)
{
    int i;

    i = 1;
    if (argc == 1)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return (0);
    }
    while (i < argc)
    {
        cout << string_upper(argv[i]) << " ";
        i++;
    }
    cout << endl;
    return (0);
}