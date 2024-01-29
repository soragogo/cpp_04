#ifndef DOG_HPP
#define DOG_HPP

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
        std::string* getBrainIdeas() const;
    private:
        Brain *brain;
};

#endif
