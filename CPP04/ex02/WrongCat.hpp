#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat(void);
        WrongCat(const WrongCat &copy);
        ~WrongCat(void);
        std::string getType(void) const;

        WrongCat &operator=(const WrongCat &assign);

        void makeSound(void) const;
};

#endif