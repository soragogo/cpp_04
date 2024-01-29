#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class Animal{
    public:
        // ~Animal();
        Animal();
        virtual ~Animal();
        Animal(const Animal &animal);
        Animal &operator=(Animal &animal);
        virtual void makeSound() const = 0;
        std::string getType() const;
        virtual std::string* getBrainIdeas() const;
    protected:
        std::string type;
};

#define END             "\033[0m"
#define BOLD            "\033[1m"
#define BLACK           "\033[30m"
#define RED             "\033[31m"
#define GREEN           "\033[32m"
#define YELLOW          "\033[33m"
#define BLUE            "\033[34m"
#define MAGENTA         "\033[35m"
#define CYAN            "\033[36m"
#define WHITE           "\033[37m"
#define UNDERLINE       "\033[4m"
#define BOLD_UNDERLINE  "\033[1;4m"

#endif
