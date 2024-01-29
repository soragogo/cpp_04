/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:22:11 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/28 20:05:04 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << GREEN << BOLD << "Test Started 🚀" << END << std::endl;

    std::cout << BLUE << "[Creating the array of Animal classes]" << END << std::endl;
    Animal *animal[6];

    std::cout << BLUE << "[Testing Dog classes]" << END << std::endl;

    std::cout << BLUE << "Original: " << END << std::endl;
    animal[0] = new Dog();
    std::cout << "animal[0]->makeSound(): ";
    animal[0]->makeSound();
    std::cout << "animal[0]->getBrain()->getIdeas(): " << animal[0]->getBrain()->getIdeas() << std::endl;

    std::cout << BLUE << "Copy Constructor: " << END << std::endl;
    animal[1] = new Dog(*animal[0]);
    std::cout << "animal[1]->makeSound(): ";
    animal[1]->makeSound();
    std::cout << "animal[1]->getBrain()->getIdeas(): " << animal[1]->getBrain()->getIdeas() << std::endl;

    std::cout << BLUE << "Copy Assignment Opeator:: " << END << std::endl;
    animal[2] = animal[1];
    std::cout << "animal[2]->makeSound(): ";
    animal[2]->makeSound();
    std::cout << "animal[2]->getBrain()->getIdeas(): " << animal[2]->getBrain()->getIdeas() << std::endl;


    std::cout << BLUE << "[Testing Cat classes]" << END << std::endl;
    std::cout << BLUE << "Original: " << END << std::endl;
    animal[3] = new Cat();
    std::cout << "animal[0]->makeSound(): ";
    animal[0]->makeSound();
    std::cout << "animal[0]->getBrain()->getIdeas(): " << animal[0]->getBrain()->getIdeas() << std::endl;

    std::cout << BLUE << "Copy Constructor: " << END << std::endl;
    animal[4] = new Cat(*animal[0]);
    std::cout << "animal[1]->makeSound(): ";
    animal[1]->makeSound();
    std::cout << "animal[1]->getBrain()->getIdeas(): " << animal[1]->getBrain()->getIdeas() << std::endl;

    std::cout << BLUE << "Copy Assignment Opeator:: " << END << std::endl;
    animal[5] = animal[1];
    std::cout << "animal[2]->makeSound(): ";
    animal[2]->makeSound();
    std::cout << "animal[2]->getBrain()->getIdeas(): " << animal[2]->getBrain()->getIdeas() << std::endl;

    std::cout << BLUE <<  "Deleting Classes ..." << END << std::endl;

    delete animal[0];
    delete animal[1];
    delete animal[3];
    delete animal[4];
    // system("leaks -q a.out");
}

