/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:11:22 by emukamada         #+#    #+#             */
/*   Updated: 2023/12/21 22:19:22 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[Cat] " << "Constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "[Cat] " << "Destructor called" << std::endl;

}

Cat::Cat(const Cat &cat)
{
    std::cout << "[Cat] " << "Copy constructor called" << std::endl;
    this->type = cat.type;
}

Cat &Cat::operator=(Cat &cat)
{
    std::cout << "[Cat] " << "Copy assignment operator called" << std::endl;
    if (this != &cat)
        this->type = cat.type;
    return *this;
}

std::string Cat::getType()
{
    return type;
}

void Cat::makeSound()
{
    std::cout << "Meow meow meow meow meow" << std::endl;
}

