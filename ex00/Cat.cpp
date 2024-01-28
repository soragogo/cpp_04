/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:11:22 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/28 19:29:53 by emukamada        ###   ########.fr       */
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
    this->type = cat.getType();
}

Cat &Cat::operator=(Cat &cat)
{
    std::cout << "[Cat] " << "Copy assignment operator called" << std::endl;
    if (this != &cat)
        this->type = cat.getType();
    return *this;
}



void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

