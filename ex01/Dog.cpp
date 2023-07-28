#include "Dog.hpp"
Dog::Dog()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout<< "Dog constructor called"<<std::endl;
}

Dog::Dog(const Dog& dog)
{     
    *this =dog;
    this->_brain = new Brain(*dog.getBrain());
    std::cout<< "Cat copy constructor called"<<std::endl;
}

Dog::~Dog()
{   
    delete this->_brain;
    std::cout<< "Dog destructor called"<<std::endl;
}

void Dog::makeSound() const
{
    std::cout<< "Bau Bau"<<std::endl;
}
Brain* Dog::getBrain() const
{
    return(_brain);
}
Dog& Dog:: operator=(Dog const &other)
{
    this->type = other.type;
    return(*this);
}