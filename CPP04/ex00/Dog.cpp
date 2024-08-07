#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    this->type = "Dog";
    std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) 
{
    *this = copy;
    std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

std::string Dog::getType(void) const
{
    return this->type;
}

Dog &Dog::operator=(const Dog &assign)
{
    this->type = assign.getType();
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}