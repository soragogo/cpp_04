#include "Brain.hpp"

Brain::Brain(){
    std::cout << "[Brain] " << "Constructor called" << std::endl;
}

Brain::~Brain(){
        std::cout << "[Brain] " << "Destructor called" << std::endl;
}

Brain::Brain(const Brain &brain){
    std::cout << "[Brain] " << "Copy constructor called" << std::endl;
    std::copy(std::begin(brain.ideas), std::end(brain.ideas), std::begin(this->ideas));
}

Brain &Brain::operator=(Brain &brain){
    std::cout << "[Brain] " << "Copy assignment operator called" << std::endl;
    if (this != &brain)
    {
        std::copy(std::begin(brain.ideas), std::end(brain.ideas), std::begin(this->ideas));
    }
    return *this;
}
