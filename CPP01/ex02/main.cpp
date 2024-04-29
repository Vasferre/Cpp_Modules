#include <iostream>

using std::cout;
using std::endl;

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    cout << "memory address of the string variable" << &str << endl;
    cout << "memory address held by stringPTR" << *stringPTR << endl;
    cout << "memory address held by stringREF" << &stringREF << endl;

    cout << endl << "value of the string variable" << str << endl;
    cout << "valued pointed by stringPTR" << *stringPTR << endl;
    cout << "valued pointed by stringREF" << stringREF << endl;

}
