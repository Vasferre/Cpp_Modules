#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(const Cure &copy)
{
    *this = copy;
    std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}

Cure &Cure::operator=(const Cure &assign)
{
    this->name = assign.name;
    return *this;
}

AMateria *Cure::clone(void) const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}