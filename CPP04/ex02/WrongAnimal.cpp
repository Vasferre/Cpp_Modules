#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->type = "nameless";
    std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
    std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
    this->type = assign.getType();
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong Nameless makes an unrecognized sound!" << std::endl;
}