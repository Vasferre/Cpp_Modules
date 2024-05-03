#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using std::cout;
using std::cerr;
using std::cin;
using std::endl;

int main(int argc, char **argv){
    if (argc != 4) {
        cerr << "invalid number of params" << endl;
        return EXIT_FAILURE;
    }

    std::ifstream file(argv[1], std::ifstream::in);

    if (!file.is_open())
    {
        cerr << "Failed to open the file" << endl;
        return EXIT_FAILURE;
    }

    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string content;

    std::getline(file, content, '\0');

    std::ofstream new_file;
    std::string new_file_name(argv[1]);
    new_file_name.append(".replace");

    new_file.open(new_file_name.c_str());

    int i;
    while((i = content.find(s1)) != -1)
    {
        content.erase(i, s1.length());
        content.insert(i, s2);
    }

    new_file << content;
    file.close();
    new_file.close();
    return EXIT_SUCESS;
}