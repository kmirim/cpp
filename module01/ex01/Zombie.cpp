#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string name):_name(name)
{}

Zombie::~Zombie(void)
{
    std::cout << this->_name <<  " destroy!" << std::endl;
}

void Zombie::setName(std::string &name)
{
    this->_name = name;
}

void Zombie::announce(void) const
{
    std::cout << this-> _name << " BraiiiiiiinnnzzzZ..." <<  std::endl; 
}