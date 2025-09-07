#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{   
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << "(FragTrap) Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{   
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout <<  "FragTrap(\"" << name << "\") constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other._name)
{
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "FragTrap assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " high fives guys!" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_energyPoints == 0 || _hitPoints == 0) {
        std::cout << "FragTrap " << _name << " can't attack - no energy or hit points left!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}