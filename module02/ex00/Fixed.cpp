#include "Fixed.hpp"

//construtor parametrizado! foi indicado pelo subject que fpn deveria ter default 0
Fixed::Fixed() : _fpn(0){
    std::cout << "Default constructor called" <<std::endl; 
}

//construtor cópia
Fixed::Fixed(const Fixed &other) : _fpn(other._fpn){
    std::cout << "Copy constructor called" << std::endl;       
}


//
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->_fpn = other._fpn;
    return *this;
}

//chamada do destrutor
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(_fpn);
}


void Fixed::setRawBits(int const raw){
    std::cout << "" << std::endl;
    _fpn = raw;
}