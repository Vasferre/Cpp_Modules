#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *dog = new Dog();
	cout << endl;
	const Cat *cat = new Cat();
	cout << endl;
	const WrongAnimal *wrongcat = new WrongCat();

	cout << dog->getType() << "'s sound: ";
	dog->makeSound();
	cout << cat->getType() << "'s sound: ";
	cat->makeSound();
	cout << wrongcat->getType() << "'s sound";
	wrongcat->makeSound();
	cout << endl;

	delete dog;
	cout << endl;
	delete cat;
	cout << endl;
	delete wrongcat;

	return 0;
}