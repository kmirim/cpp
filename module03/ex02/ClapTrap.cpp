    #include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) 
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints == 0 || _hitPoints == 0) {
        std::cout << "ClapTrap " << _name << " can't attack - no energy or hit points left!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints < static_cast<int>(amount)) {
        _hitPoints = 0;
    } else {
        _hitPoints -= amount;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! (" << _hitPoints << " HP remaining)" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints == 0 || _hitPoints == 0) {
        std::cout << "ClapTrap " << _name << " can't repair - no energy or hit points left!" << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points! (" << _hitPoints << " HP now)" << std::endl;
}