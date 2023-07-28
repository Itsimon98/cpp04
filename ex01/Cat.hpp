#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private :
                Brain* _brain;
    public :
                Cat();
                Cat(const Cat & cat);
                virtual void makeSound() const;
                Cat& operator=(Cat const &other);
                virtual ~Cat();
                Brain* getBrain() const;

};
#endif