#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#define N_ANIMALS 4

#define N_ANIMALS 4

int	main() {
	{
		std::cout << "------- ANIMALS -------" << std::endl;
		const Animal*	zoo[N_ANIMALS];
		// Animal test; // to check abstract class
		for (int i = 0; i < N_ANIMALS / 2; i++)
			zoo[i] = new Cat();
		for (int i = N_ANIMALS / 2; i < N_ANIMALS; i++)
			zoo[i] = new Dog();
		for (int i = 0; i < N_ANIMALS; i++)
			zoo[i]->makeSound();
		Cat* cat = new Cat();
		cat->getBrain()->setIdeas("Ideas on animals brain 1");
		cat->getBrain()->setIdeas("Ideas on animals brain 2");
		cat->getBrain()->setIdeas("Ideas on animals brain 3");
		cat->getBrain()->setIdeas("Ideas on animals brain 4");
		Cat* cat2 = new Cat(*cat);
		cat2->getBrain()->setIdeas("Ideas on animals brain 7");
		cat->getBrain()->printIdeas();
		cat2->getBrain()->printIdeas();
		for (int i = 0; i < N_ANIMALS; i++)
			delete zoo[i];
	}
	{
		std::cout << "------- BRAIN -------" << std::endl;

		Brain*	normal = new Brain();

		normal->setIdeas("My name is AB");
		normal->setIdeas("I like watching movies");
		normal->setIdeas("My favourite is Frankenstein Junior");

		normal->printIdeas();

		Brain*	abnormal = new Brain(*normal);

		delete normal;

		abnormal->printIdeas();

		delete abnormal;
	}
}