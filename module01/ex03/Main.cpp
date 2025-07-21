#include <cstdlib>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
    { 
        Weapon club;
        club = Weapon(" crude spiked club");
        
        HumanA bob = HumanA("Bob ", club);
        bob.attack();

        club.setType(" some other type of club");
        bob.attack();
    }
    {
        Weapon club;
        club = Weapon("Crude spiked club");
        
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        
        club.setType("Some other type of club");
        jim.attack();
    }

    return EXIT_SUCCESS;
}