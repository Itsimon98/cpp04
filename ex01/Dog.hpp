#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    private :
                Brain* _brain;
    public :
                Dog();
                Dog(const Dog& dog);
                virtual void makeSound() const;
                Dog& operator=(Dog const &other);
                Brain *getBrain() const;
                virtual ~Dog();


};
#endif