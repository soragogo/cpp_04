#pragma once

#include <iostream>

class Animal{
    public:
        Animal();
        // ~Animal();
        virtual ~Animal();
        Animal(const Animal &animal);
        Animal &operator=(Animal &animal);
        virtual void makeSound() const;
        std::string getType() const;


    protected:
        std::string type;
};
