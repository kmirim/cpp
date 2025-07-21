#include "HumanB.hpp"

HumanB::HumanB(std::string name) : 
        _name(name){}

HumanB::~HumanB(void){}

void HumanB::setWeapon(Weapon &weapon){
    this -> _weapon = &weapon;
}

void HumanB::attack() const{
    std::cout << _name << " attack with their " <<std::endl;

    if(this->_weapon)
        std::cout << this->_weapon->getType();
    else
        std::cout << "bare fists"; 
    std::cout << std::endl;
}
