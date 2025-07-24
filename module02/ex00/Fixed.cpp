#include "Fixed.hpp"

//construtor parametrizado! foi indicado pelo subject que fpn deveria ter default 0
Fixed::Fixed() : _fpn(0) { 
    std::cout << "Default constructor called" <<std::endl; 
}

//construtor cópia
Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl; 
    *this =other;
}

//criar copia
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this == &other)
        return *this;
    this-> setRawBits(other.getRawBits());
    return *this;
}

//chamada do destrutor
Fixed::~Fixed(){ 
    std::cout << "Destructor called" << std::endl; 
}

//instancia a funcao de ler os bits da memoria raw
int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(_fpn);
}

//instancia o modificador da variavel raw
void Fixed::setRawBits(int const raw){ 
    _fpn = raw; 
}