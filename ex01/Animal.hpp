#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP
#include <iostream>

class Animal
{
    protected :
                std::string type;
    public :
                Animal();
                Animal(const Animal& animal);
                virtual void  makeSound() const;
                std::string getType() const;
                Animal& operator=(Animal const &other);
                virtual~Animal();
};
#endif