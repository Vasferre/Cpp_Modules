#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog(void);
        Dog(const Dog &copy);
        ~Dog(void);
        std::string getType(void) const;

        Dog &operator=(const Dog &assign);

        void makeSound(void) const;

};

#endif