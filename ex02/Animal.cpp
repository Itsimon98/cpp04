#include "Animal.hpp"

Animal::~Animal()
{
    std::cout<<"Animal destructor called"<<std::endl;
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