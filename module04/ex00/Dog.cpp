#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal(){
    this->type = "Dog";
    std::cout << "[Dog]: Copy constructor called. \n" <<std::endl;
};

Dog::Dog(const Dog &other) : Animal(other){
    std::cout << "[Dog]: Copy constructor called. \n" <<std::endl;
    this->type = other.type;
};


Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog -> Copy assigment operator called!\n";
    this->type = other.type;
    return *this;
}

Dog ::~Dog(){
    std::cout << "[Dog]: Destructor called.\n" << std::endl;    
};

void Dog::makeSound() const
{
    std::cout << "Auw Auw!" << std::endl;
}
