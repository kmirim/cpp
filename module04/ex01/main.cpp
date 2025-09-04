#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    std::cout << "===== CONSTRUCTION TEST =====" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n===== SOUND TEST =====" << std::endl;
    j->makeSound();  // Should print "Auw Auw!"
    i->makeSound();  // Should print "Meow meow!"

    std::cout << "\n===== TYPE TEST =====" << std::endl;
    std::cout << "Dog type: " << j->getType() << std::endl;
    std::cout << "Cat type: " << i->getType() << std::endl;

    std::cout << "\n===== DESTRUCTION TEST =====" << std::endl;
    delete j;
    delete i;

    std::cout << "\n===== ARRAY OF ANIMALS TEST =====" << std::endl;
    Animal* animals[4];
    for (int k = 0; k < 2; ++k) animals[k] = new Dog();
    for (int k = 2; k < 4; ++k) animals[k] = new Cat();
    
    std::cout << "Array types: ";
    for (int k = 0; k < 4; ++k) {
        std::cout << animals[k]->getType() << " ";
    }
    std::cout << std::endl;
    
    for (int k = 0; k < 4; ++k) delete animals[k];

    std::cout << "\n===== DEEP COPY TEST (DOG) =====" << std::endl;
    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Chase the cat!");
    Dog copiedDog = originalDog; // Deep copy

    std::cout << "Original Dog's idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    copiedDog.getBrain()->setIdea(0, "Squirrel?");
    std::cout << "After modification:" << std::endl;
    std::cout << "Original Dog's idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n===== DEEP COPY TEST (CAT) =====" << std::endl;
    Cat originalCat;
    originalCat.getBrain()->setIdea(0, "Hunt the mouse!");
    Cat copiedCat = originalCat; // Deep copy

    std::cout << "Original Cat's idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat's idea: " << copiedCat.getBrain()->getIdea(0) << std::endl;

    copiedCat.getBrain()->setIdea(0, "Sleep in the sun");
    std::cout << "After modification:" << std::endl;
    std::cout << "Original Cat's idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat's idea: " << copiedCat.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n===== ASSIGNMENT OPERATOR TEST =====" << std::endl;
    Dog dog1, dog2;
    dog1.getBrain()->setIdea(0, "Original idea");
    dog2 = dog1;  // Test assignment operator
    
    std::cout << "Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;
    
    dog2.getBrain()->setIdea(0, "Modified idea");
    std::cout << "After assignment modification:" << std::endl;
    std::cout << "Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n===== END OF TESTS =====" << std::endl;
    return 0;
}