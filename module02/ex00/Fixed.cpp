#include "Fixed.hpp"

Fixed::Fixed() : _fpn(0) { 
    std::cout << "Default constructor called" <<std::endl; 
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl; 
    *this =other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this == &other)
        return *this;
    this-> setRawBits(other.getRawBits());
    return *this;
}

Fixed::~Fixed(){ 
    std::cout << "Destructor called" << std::endl; 
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(_fpn);
}

void Fixed::setRawBits(int const raw){ 
    _fpn = raw; 
}
