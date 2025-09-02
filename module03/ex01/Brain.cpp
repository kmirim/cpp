#include "Brain.hpp"

Brain::Brain(){
    std::cout << "[Brain]: default constructor called.\n" << std::endl;
    for(int i = 0; i < IDEAS; i++)
        this->_ideas[i] = "I want to sleep";
}

Brain::Brain(const Brain &other){
    std::cout << "[Brain]: copy constructor called.\n" << std::endl;
    for(int i = 0; i < IDEAS; i++)
        this->_ideas[i] = other._ideas[i];
}

Brain &Brain::operator=(const Brain &other){
    std::cout << "[Brain]: copy assignment operator called.\n" << std::endl;
    for(int i = 0; i < IDEAS; i++)
        this->_ideas[i] = other._ideas[i];
    return *this;
}

Brain::~Brain(){
    std::cout << "[Brain]: destructor called.\n" << std::endl;
}

const std::string &Brain::getIdeas(int index) const{
    return this->_ideas[index];
}