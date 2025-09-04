#include "Zombie.hpp"

int main()
{
    Zombie *heapZombie = new Zombie("heapZombie");
    Zombie *zombieTwo = newZombie("heapZombieTwo");
    
    heapZombie->announce();
    delete heapZombie;
    
    zombieTwo->announce();
    delete zombieTwo;
    
    randomChump("StackZombie");
    
    return (0);
}