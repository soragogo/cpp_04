#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "[WrongAnimal] " << "Constructor called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[WrongAnimal] " << "Destructor called" << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal &wanimal)
{
    std::cout << "[WrongAnimal] " << "Copy constructor called" << std::endl;
    this->type = wanimal.getType();

}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &wanimal)
{
    std::cout << "[WrongAnimal] " << "Copy assignment operator called" << std::endl;
    if (this != &wanimal)
        this->type = wanimal.getType();
    return *this;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "*Indistinguishable WrongAnimal sound*" << std::endl;
}

