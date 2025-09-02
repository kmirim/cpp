#include "zombie.hpp"

int main (){
    int i = -1;
    int const count = 42;

    Zombie *horde = zombieHorde(count, "Zombie");
    
    while(++i < count)
        horde[i].announce();
    delete[]horde;
}