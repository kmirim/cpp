#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
class Animal {
    protected: 
        std::string type;

    public:
        Animal();
        Animal(const Animal &other); //construtor de copia
        virtual ~Animal();

        Animal &operator=(const Animal &other);

        std::string getType() const;
        virtual void makeSound() const;

};

#endif