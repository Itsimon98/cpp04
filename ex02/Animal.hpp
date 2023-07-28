#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP
#include <iostream>

class Animal
{
    protected :
                std::string type;
    public :
                virtual void  makeSound() const = 0;
                std::string getType() const;
                Animal& operator=(Animal const &other);
                virtual~Animal();
};
#endif