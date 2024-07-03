#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal {
    protected:
        std::string type;
    
    public:
        Animal(void);
        Animal(const Animal &copy);
        virtual ~Animal(void);
        std::string getType(void) const;

        Animal &operator=(const Animal &assign);

        virtual void makeSound(void) const = 0;
};

#endif