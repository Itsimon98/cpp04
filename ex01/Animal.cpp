#include "Animal.hpp"

Animal::Animal()
{
    this ->type = "";
    std::cout<<"Animal constructor called"<<std::endl;
}
Animal::~Animal()
{
    std::cout<<"Animal destructor called"<<std::endl;
}
Animal::Animal(const Animal& animal) {
	*this = animal;
	std::cout << "Animal copy constructor called" << std::endl;
}
void Animal::makeSound() const
{
    std::cout<< "Some noise"<<std::endl;
}
std::string Animal::getType() const
{
    return(this->type);
}
Animal& Animal::operator=(Animal const &other)
{
    this->type = other.type;
    return(*this);
}