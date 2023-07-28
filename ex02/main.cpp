#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#define N_ANIMALS 4

int	main() {
	{
		std::cout << "------- ANIMALS -------" << std::endl;
		const Animal*	zoo[N_ANIMALS];

		for (int i = 0; i < N_ANIMALS / 2; i++)
			zoo[i] = new Cat();
		for (int i = N_ANIMALS / 2; i < N_ANIMALS; i++)
			zoo[i] = new Dog();
		for (int i = 0; i < N_ANIMALS; i++)
			zoo[i]->makeSound();
		Cat* cat = new Cat();
		Dog* dog = new Dog();
		std::cout << "Cat ideas" << std::endl;
		cat->getBrain()->setIdeas("Ideas on animals brain 1");
		cat->getBrain()->setIdeas("Ideas on animals brain 2");
		cat->getBrain()->setIdeas("Ideas on animals brain 3");
		cat->getBrain()->setIdeas("Ideas on animals brain 4");
		cat->getBrain()->printIdeas();
		std::cout << "Dog ideas" << std::endl;
		dog->getBrain()->setIdeas("Ideas on animals brain 1");
		dog->getBrain()->setIdeas("Ideas on animals brain 2");
		dog->getBrain()->setIdeas("Ideas on animals brain 3");
		dog->getBrain()->setIdeas("Ideas on animals brain 4");
		dog->getBrain()->printIdeas();
		delete dog;
		for (int i = 0; i < N_ANIMALS; i++)
			delete zoo[i];
			delete cat;
	
		std::cout<< std::endl;

		Brain*	firstbrain = new Brain();

		firstbrain->setIdeas("My name is AB");
		firstbrain->setIdeas("I like watching movies");
		firstbrain->setIdeas("My favourite is Frankenstein Junior");

		firstbrain->printIdeas();

		Brain*	secondbrain = new Brain(*firstbrain);

		delete firstbrain;

		secondbrain->printIdeas();

		delete secondbrain;
	}
}