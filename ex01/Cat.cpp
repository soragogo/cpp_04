/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:11:22 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/29 11:50:29 by emukamada        ###   ########.fr       */
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

Cat::Cat(const Cat &cat) :Animal(cat)
{
    std::cout << "[Cat] " << "Copy constructor called" << std::endl;
    this->brain = new Brain();
    this->type = cat.getType();
}

Cat::Cat(const Animal &cat)
{
    std::cout << "[Cat] " << "Copy constructor called" << std::endl;
    this->brain = new Brain();
    this->type = cat.getType();
}

Cat &Cat::operator=(Cat &cat)
{
    std::cout << "[Cat] " << "Copy assignment operator called" << std::endl;
    if (this != &cat)
    {
        delete this->brain;
        this->brain = new Brain;
        this->type = cat.getType();
    }
    return *this;
}



void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}


std::string* Cat::getBrainIdeas() const
{
    return brain->getIdeas();
}
