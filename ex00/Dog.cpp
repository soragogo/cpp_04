/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:11:22 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/28 19:30:04 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "[Dog] " << "Constructor called" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "[Dog] " << "Destructor called" << std::endl;

}

Dog::Dog(const Dog &dog)
{
    std::cout << "[Dog] " << "Copy constructor called" << std::endl;
    this->type = dog.getType();
}

Dog &Dog::operator=(Dog &dog)
{
    std::cout << "[Dog] " << "Copy assignment operator called" << std::endl;
    if (this != &dog)
        this->type = dog.getType();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woooof" << std::endl;
}

