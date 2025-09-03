#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "[Animal]: Default constructor called. \n" << std::endl;
};

Animal::Animal(const Animal &other){
    std::cout << "[Animal]: Copy constructor called. \n" << std::endl;
    this->_type = other._type;
};

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "[Animal]: Copy assigment operator called!\n";
    if (this != &other) {
        
        this->_type = other._type;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "[Animal] Destructor called.\n" << std::endl;
};


void Animal::makeSound() const
{
    std::cout << "I am a general animal and I don´t make sounds. Implement me somewhere" << std::endl;
}

std::string Animal::getType() const { 
    return _type; 
}