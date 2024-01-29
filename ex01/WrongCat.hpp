#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat();
        WrongCat(std::string type);
        ~WrongCat();
        WrongCat(const WrongCat &wcat);
        WrongCat &operator=(WrongCat &wcat);
        void makeSound() const;
};

#endif
