#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) 
{
    *this = copy;
    std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}

std::string WrongCat::getType(void) const
{
    return this->type;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
    this->type = assign.getType();
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Wrong cat says meow" << std::endl;
}