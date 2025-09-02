#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain()){
    this->type = "Dog";
    std::cout << "[Dog]: Copy constructor called. \n" <<std::endl;
};

Dog::Dog(const Dog &other) : Animal(other){
    std::cout << "[Dog]: Copy constructor called. \n" <<std::endl;
    this->type = other.type;
    this->_brain = new Brain(*other._brain);
};


Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog -> Copy assigment operator called!\n";
    this->type = other.type;
    this->_brain = new Brain(*other._brain);
    return *this;
}

Dog ::~Dog(){
    delete this->_brain;
    std::cout << "[Dog]: Destructor called.\n" << std::endl;    
};

void Dog::makeSound() const
{
    std::cout << "Auw Auw!" << std::endl;
}
