#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);

        void setName(std::string &_name);
        void announce(void) const;
};

Zombie *zombieHorde(int N, std::string name);