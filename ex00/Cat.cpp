#include "Cat.hpp"
Cat::Cat()
{
    this->type = "Cat";
    std::cout<< "Cat constructor called"<<std::endl;
}
Cat::~Cat()
{
    std::cout<< "Cat destructor called"<<std::endl;
}
void Cat::makeSound() const
{
    std::cout<< "Meooooow"<<std::endl;
}
Cat& Cat::operator=(Cat const &other)
{
    this->type = other.type;
    return(*this);
}