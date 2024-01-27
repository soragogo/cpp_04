#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class Animal{
    public:
        // ~Animal();
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
        Brain* getBrain() const;

    protected:
        Animal();
        std::string type;

    private:
        Brain *brain;
        Animal(const Animal &animal);
        Animal &operator=(Animal &animal);
};

#endif
