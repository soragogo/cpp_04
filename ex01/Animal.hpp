#pragma once

#include <iostream>
#include "Brain.hpp"
class Animal{
    public:
        // ~Animal();
        Animal();
        virtual ~Animal();
        Animal(const Animal &animal);
        Animal &operator=(Animal &animal);
        virtual void makeSound() const;
        std::string getType() const;
        Brain* getBrain() const;

    protected:
        std::string type;

    private:
        Brain *brain;
};
