/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:11:22 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/08 19:26:43 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[Cat] " << "Constructor called" << std::endl;
    brain = new Brain();
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "[Cat] " << "Destructor called" << std::endl;
    delete brain;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "[Cat] " << "Copy constructor called" << std::endl;
    this->brain = cat.brain;
    this->type = cat.type;
}

Cat::Cat(const Animal &cat)
{
    std::cout << "[Cat] " << "Copy constructor called" << std::endl;
    this->brain = cat.getBrain();
    this->type = cat.getType();
}

Cat &Cat::operator=(Cat &cat)
{
    std::cout << "[Cat] " << "Copy assignment operator called" << std::endl;
    if (this != &cat)
    {
        this->brain = cat.brain;
        this->type = cat.type;
    }
    return *this;
}



void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
