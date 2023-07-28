#include "Dog.hpp"
Dog::Dog()
{
    this->type = "Dog";
    std::cout<< "Dog constructor called"<<std::endl;
}

Dog::Dog(const Dog& dog)
{   *this = dog;
    std::cout<< "Dog copy constructor called"<<std::endl;
}
Dog::~Dog()
{
    std::cout<< "Dog destructor called"<<std::endl;
}

void Dog::makeSound() const
{
    std::cout<< "Bau Bau"<<std::endl;
}

Dog& Dog:: operator=(Dog const &other)
{
    this->type = other.type;
    return(*this);
}