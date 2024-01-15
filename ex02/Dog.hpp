#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    public:
        Dog();
        ~Dog();
        Dog(const Dog &dog);
        Dog(const Animal &dog);
        Dog &operator=(Dog &dog);
        void makeSound() const;
    private:
        Brain *brain;
};
