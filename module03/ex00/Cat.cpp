#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "[Cat]: Default constructor called. \n" << std::endl;
};

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "[Cat]: Copy constructor called. \n" << std::endl;
    this->type = other.type;
};

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "[Cat]: Copy assigment operator called!\n";
    this->type = other.type;
    return *this;
};

Cat::~Cat(){
    std::cout << "[Cat]: Destructor called!\n" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow!" << std::endl;
}
