#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class   Brain
{
    private : 
            std::string ideas[100];
            int ind;
    public :
            Brain();
            void setIdeas(std::string);
            void printIdeas(void) const;
            ~Brain();


};
#endif