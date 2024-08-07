#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string.h>

class WrongAnimal {
    protected:
        std::string type;

    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal(void);
        std::string getType(void) const;

        WrongAnimal &operator=(const WrongAnimal &assign);

        virtual void makeSound(void) const;
};

#endif