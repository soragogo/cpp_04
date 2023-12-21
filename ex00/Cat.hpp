#pragma once

#include "Animal.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(std::string type);
        ~Cat();
        Cat(const Cat &cat);
        Cat &operator=(Cat &cat);
        void makeSound();
};
