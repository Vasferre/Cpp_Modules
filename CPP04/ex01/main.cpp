#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void subjectTest()
{
	std::cout << std::endl;
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j; // should not create a leak
	delete i; // should not create a leak
}

int main()
{
	subjectTest();
	return 0;
}