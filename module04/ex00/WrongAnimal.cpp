#include "Animal.hpp"
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "[WrongAnimal]: Default constructor called. \n" << std::endl;
    this->type = "WrongAnimal";
};

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    std::cout << "[WrongAnimal]: Copy constructor called. \n" <<std::endl;
    this->type = other.type;
};


WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    std::cout << "WrongAnimal -> Copy assigment operator called!\n";
    this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "[WrongAnimal] Destructor called.\n" << std::endl;
};


void WrongAnimal::makeSound() const
{
    std::cout << "I'm just a WrongAnimal, I can't make proper sounds!" << std::endl;
}

std::string WrongAnimal::getType() const { return this->type; }