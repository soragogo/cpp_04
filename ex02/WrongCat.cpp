#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "[WrongCat] " << "Constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] " << "Destructor called" << std::endl;

}

WrongCat::WrongCat(const WrongCat &wcat) :WrongAnimal(wcat)
{
    std::cout << "[WrongCat] " << "Copy constructor called" << std::endl;
    this->type = wcat.getType();
}

WrongCat &WrongCat::operator=(WrongCat &wcat)
{
    std::cout << "[WrongCat] " << "Copy assignment operator called" << std::endl;
    if (this != &wcat)
        this->type = wcat.getType();
    return *this;
}



void WrongCat::makeSound() const
{
    std::cout << "Beow" << std::endl;
}

