#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include "Contact.hpp"

using std::cout;
using std::cin;
using std::string;
using std::endl;

#define MAX_INDEX 7

class PhoneBook{
    private:
        Contact contacts[8];
        static int index;
    public:
        PhoneBook() {};
        void addContact();
        void searchContact();
};

#endif