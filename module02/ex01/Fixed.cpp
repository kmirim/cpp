#include "Fixed.hpp"

Fixed::Fixed(const float num_float) 
    : _fpn(num_float * float (1 << _nfb) + (num_float >= 0 ? 0.5 : -0.5)) {
        std::cout << "Float constructor called\n" << std::endl;
}

Fixed::Fixed(const int num_int) 
    : _fpn(num_int * int(1 << _nfb) + (num_int >= 0 ? 0.5 : -0.5)) 
{
    std::cout << "Int constructor called\n" << std::endl;
}

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

float Fixed::toFloat(void) const{
    return(float(_fpn) / float(1<<_nfb));
}

int Fixed::toInt(void) const{ 
    return (int(_fpn) / int(1 << _nfb));
}

std::ostream &operator<<(std::ostream &out, const Fixed &right) {
    out << right.toFloat();
    return (out);
};