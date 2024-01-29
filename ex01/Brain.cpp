#include "Brain.hpp"

Brain::Brain(){
    std::cout << "[Brain] " << "Constructor called" << std::endl;
}

Brain::~Brain(){
        std::cout << "[Brain] " << "Destructor called" << std::endl;
}

Brain::Brain(const Brain &brain){
    std::cout << "[Brain] " << "Copy constructor called" << std::endl;
    this->ideas = setIdeas(brain.ideas);
}

Brain &Brain::operator=(Brain &brain){
    std::cout << "[Brain] " << "Copy assignment operator called" << std::endl;
    if (this != &brain)
    {
        this->ideas = setIdeas(brain.ideas);
    }
    return *this;
}

std::string* Brain::getIdeas(){
    return ideas;
}

void Brain::setIdeas(std::string* ideas){
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = ideas[i];
    }
}
