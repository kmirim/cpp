#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap {
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public: 
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ScavTrap &operator=(const ScavTrap &other);
        ~ScavTrap();

        void guardGate();
        void attack(const std::string& target);
};