/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:22:11 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/08 19:24:41 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    Animal *animal[6];
    animal[0] = new Dog();
    animal[1] = new Dog(*animal[0]);
    animal[2] = animal[1];

    animal[3] = new Cat();
    animal[4] = new Cat(*animal[3]);
    animal[5] = animal[4];

    animal[0]->makeSound();
    animal[1]->makeSound();
    animal[2]->makeSound();
    animal[3]->makeSound();
    animal[4]->makeSound();
    animal[5]->makeSound();

    delete animal[0];
    delete animal[1];
    delete animal[3];
    delete animal[4];
}

void end(void)__attribute__((destructor));

void end(void)
{
    system("leaks -q a.out");
}
