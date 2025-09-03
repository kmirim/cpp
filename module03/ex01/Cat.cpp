#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    this->brain = new Brain();
    std::cout << "[Cat]: Default constructor called. \n" << std::endl;
};

Cat::Cat(const Cat &other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "[Cat]: Copy constructor called. \n" << std::endl;
    this->_type = other._type;
};

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "[Cat]: Copy assigment operator called!\n";
    if (this != &other) {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
};

Cat::~Cat(){
    delete this->brain;
    std::cout << "[Cat]: Destructor called!\n" << std::endl;
}


Brain* Cat::getBrain() const
{
	return this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow!" << std::endl;
}
