#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *animals[4] = {
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat()};

	for (int i = 0; i < 4; i++)
		delete animals[i];

	return 0;
}