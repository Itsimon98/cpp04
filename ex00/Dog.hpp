#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP
#include "Animal.hpp"
class Dog : public Animal
{
    public :
                Dog();
                Dog(const Dog& dog);
                virtual void makeSound() const;
                Dog& operator=(Dog const &other);
                virtual ~Dog();

};
#endif