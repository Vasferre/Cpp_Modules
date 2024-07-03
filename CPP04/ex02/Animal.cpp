#include "Animal.hpp"

Animal::Animal(void)
{
    this->type = "Nameless";
    std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}

Animal &Animal::operator=(const Animal &assign)
{
    this->type = assign.getType();
    return *this;
}

std::string Animal::getType(void) const
{
    return this->type;
}