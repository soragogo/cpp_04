#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &cat);
        Cat(const Animal &cat);
        Cat &operator=(Cat &cat);
        void makeSound() const;
    private:
        Brain *brain;
};

#endif
