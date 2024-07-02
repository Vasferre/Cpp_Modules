#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* a = new Animal();
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	const WrongAnimal* w = new WrongCat();

	cout << endl;

	cout << c->getType() << " says: ";
	c->makeSound(); //will output the cat sound!
	cout << d->getType() << " says: ";
	d->makeSound();
	cout << a->getType() << " says: ";
	a->makeSound();
	cout << w->getType() << " says: ";
	w->makeSound();

	cout << endl;

	delete a;
	delete c;
	delete d;
	delete w;

	return 0;
}