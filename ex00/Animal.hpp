#pragma once

#include <iostream>

class Animal{
    public:
        Animal();
        ~Animal();
        Animal(const Animal &animal);
        Animal &operator=(Animal &animal);
        void makeSound();
        std::string getType();


    protected:
        std::string type;
};
