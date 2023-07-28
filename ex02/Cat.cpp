#include "Cat.hpp"
Cat::Cat()
{
    this->type = "Cat";
    this-> _brain = new Brain();
    std::cout<< "Cat constructor called"<<std::endl;
}
Cat::~Cat()
{
    delete this->_brain;
    std::cout<< "Cat destructor called"<<std::endl;
}
Cat::Cat(const Cat & cat)
{   
    *this =cat;
    this->_brain = new Brain(*cat.getBrain());
    std::cout<< "Cat copy constructor called"<<std::endl;
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
Brain* Cat::getBrain() const
{
    return(_brain);
}