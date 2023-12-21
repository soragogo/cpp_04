#pragma once

#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        Dog(const Dog &dog);
        Dog &operator=(Dog &dog);
        void makeSound();

};
