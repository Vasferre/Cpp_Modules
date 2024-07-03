#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << i->getType() << " says: ";
	i->makeSound(); //will output the cat sound!
	std::cout << j->getType() << " says: ";
	j->makeSound();
	std::cout << meta->getType() << " says: ";
	meta->makeSound();

	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;

	return 0;
}