#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
	std::cout << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	const WrongAnimal*	wrongA = new WrongAnimal();
	const WrongAnimal*	wrongC = new WrongCat();

	std::cout << std::endl;
	std::cout << wrongA->getType() << std::endl;
	std::cout << wrongC->getType() << std::endl;
	wrongA->makeSound();
	wrongC->makeSound();

	std::cout<< std::endl;
	delete wrongA;
	delete wrongC;
	return 0;
}