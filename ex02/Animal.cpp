/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:11:22 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/28 19:44:32 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "[Animal] " << "Constructor called" << std::endl;
    type = "Animal";
}

Animal::~Animal()
{
    std::cout << "[Animal] " << "Destructor called" << std::endl;

}

// Animal::Animal(const Animal &animal)
// {
//     std::cout << "[Animal] " << "Copy constructor called" << std::endl;
//     this->type = animal.getType();

// }

// Animal &Animal::operator=(Animal &animal)
// {
//     std::cout << "[Animal] " << "Copy assignment operator called" << std::endl;
//     if (this != &animal)
//         this->type = animal.getType();
//     return *this;
// }

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "*Indistinguishable animal sound*" << std::endl;
}

Brain *Animal::getBrain() const
{
    return brain;
}



