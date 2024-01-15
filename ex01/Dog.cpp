/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:11:22 by emukamada         #+#    #+#             */
/*   Updated: 2023/12/29 23:12:07 by emukamada        ###   ########.fr       */
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

Dog::Dog(const Dog &dog)
{
    std::cout << "[Dog] " << "Copy constructor called" << std::endl;
    this->brain = dog.brain;
    this->type = dog.type;
}
Dog::Dog(const Animal &dog)
{
    std::cout << "[Dog] " << "Copy constructor called" << std::endl;
    this->brain = dog.getBrain();
    this->type = dog.getType();
}

Dog &Dog::operator=(Dog &dog)
{
    std::cout << "[Dog] " << "Copy assignment operator called" << std::endl;
    if (this != &dog)
    {
        this->brain = dog.brain;
        this->type = dog.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woooof" << std::endl;
}
