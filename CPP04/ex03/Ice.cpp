#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(const Ice &copy)
{
    *this = copy;
    std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
}

Ice::~Ice(void)
{
    std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}

Ice &Ice::operator=(const Ice &assign)
{
    this->name = assign.name;
    return *this;
}

AMateria *Ice::clone(void) const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}