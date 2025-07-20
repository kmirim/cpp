#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
    Weapon club;
    club = Weapon(" crude spiked club");
    
    HumanA bob = HumanA("Bob ", club);
    
    bob.attack();

    club.setType("Some other type of club");
    bob.attack();
    return 0;
}