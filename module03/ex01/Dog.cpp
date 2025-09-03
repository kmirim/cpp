#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal(){
    this->_type = "Dog";
    this->brain = new Brain();
    std::cout << "[Dog]: Default constructor called. \n" <<std::endl;
};

Dog::Dog(const Dog &other) : Animal(other){
    std::cout << "[Dog]: Copy constructor called. \n" <<std::endl;
    this->_type = other._type;
    this->brain = new Brain(*other.brain);
};


Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog -> Copy assigment operator called!\n";
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

Dog ::~Dog(){
    delete this->brain;
    std::cout << "[Dog]: Destructor called.\n" << std::endl;    
};

void Dog::makeSound() const
{
    std::cout << "Auw Auw!" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}
