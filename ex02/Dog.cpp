/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:11:22 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/29 11:51:02 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "[Dog] " << "Constructor called" << std::endl;
    brain = new Brain();
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "[Dog] " << "Destructor called" << std::endl;
    delete brain;
}

Dog::Dog(const Dog &dog) :Animal(dog)
{
    std::cout << "[Dog] " << "Copy constructor called" << std::endl;
    this->brain = new Brain;
    this->type = dog.getType();
}
Dog::Dog(const Animal &dog)
{
    std::cout << "[Dog] " << "Copy constructor called" << std::endl;
    this->brain = new Brain;
    this->type = dog.getType();
}

Dog &Dog::operator=(Dog &dog)
{
    std::cout << "[Dog] " << "Copy assignment operator called" << std::endl;
    if (this != &dog)
    {
        delete this->brain;
        this->brain = new Brain;
        this->type = dog.getType();
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woooof" << std::endl;
}

std::string* Dog::getBrainIdeas() const
{
    return brain->getIdeas();
}
