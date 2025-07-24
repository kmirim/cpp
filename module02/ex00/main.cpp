#include <iostream>
#include "Fixed.hpp"
int main (void){
    Fixed a; // construtor

    std::cout << "-----------------" << std::endl;

    Fixed b (a); // copia
    
    std::cout << "-----------------" << std::endl;
    
    Fixed c; // construtor
    
    std::cout << "-----------------" << std::endl;
    


    c = b;
    std::cout << "-----------------" << std::endl;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << "-----------------" << std::endl;
    
    std::cout << b.getRawBits() << std::endl;
    std::cout << "-----------------" << std::endl;
    
    std::cout << c.getRawBits() << std::endl;

    return (0);
}