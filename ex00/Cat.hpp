#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP
#include "Animal.hpp"
class Cat : public Animal
{

    public :
                Cat();
                
                virtual void makeSound() const;
                Cat& operator=(Cat const &other);
                virtual ~Cat();

};
#endif