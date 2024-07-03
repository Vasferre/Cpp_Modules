#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy) 
{
    *this = copy;
    std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}

Cat::~Cat(void)
{
    delete this->brain;
    std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}

std::string Cat::getType(void) const
{
    return this->type;
}

Cat &Cat::operator=(const Cat &assign)
{
    this->type = assign.getType();
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "miau" << std::endl;
}