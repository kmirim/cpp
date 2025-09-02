#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal(), _brain(new Brain())
{
    this->type = "Cat";
    std::cout << "[Cat]: Default constructor called. \n" << std::endl;
};

Cat::Cat(const Cat &other) : Animal(other)
{
    this->_brain = new Brain(*other._brain);
    std::cout << "[Cat]: Copy constructor called. \n" << std::endl;
    this->type = other.type;
};

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "[Cat]: Copy assigment operator called!\n";
    this->type = other.type;
    this->_brain = new Brain(*other._brain);
    return *this;
};

Cat::~Cat(){
    delete this->_brain;
    std::cout << "[Cat]: Destructor called!\n" << std::endl;
}


Brain* Cat::getBrain() const
{
	return this->_brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow!" << std::endl;
}
