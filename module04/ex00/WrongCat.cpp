#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "[Wrongcat]: Default constructor called. \n" << std::endl;
    this->type = "WrongCat";
};

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
    std::cout << "[Wrongcat]: Copy constructor called. \n" << std::endl;
    this->type = other.type;
};

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "[WrongCat]: Copy assigment operator called!\n";
    this->type = other.type;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "[WrongCat] Destructor called.\n" << std::endl;
};


void WrongCat::makeSound() const
{
    std::cout << "I'm wrong miauw!" << std::endl;
}



