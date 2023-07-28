#include "Brain.hpp"

Brain::Brain()
{   
    this->ind = 0;
    std::cout<<"Brain constructor called"<<std::endl;
}

Brain::~Brain()
{
    std::cout<<"Brain destructor called"<<std::endl;
}


 void Brain::setIdeas(std::string idea)
 {
    this->ideas[ind++] = idea;
     ind = ind % 100;
 }

  void Brain::printIdeas(void) const
  {
        for (int i = 0; i < 100 && !ideas[i].empty(); i++)
		std::cout << i << ": " << ideas[i] << std::endl;
  }