/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:22:11 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/29 11:26:36 by emukamada        ###   ########.fr       */
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
    std::cout << std::endl;

    std::cout << BOLD << BLUE << "[Testing Dog classes]" << END << std::endl;
    std::cout << BLUE << "Original: " << END << std::endl;
    animal[0] = new Dog();
    std::cout << "animal[0]->makeSound(): ";
    animal[0]->makeSound();
    std::cout << "animal[0]->getBrainIdeas(): " << animal[0]->getBrainIdeas() << std::endl;

    std::cout << BLUE << "Copy Constructor: " << END << std::endl;
    animal[1] = new Dog(*animal[0]);
    std::cout << "animal[1]->makeSound(): ";
    animal[1]->makeSound();
    std::cout << "animal[1]->getBrainIdeas(): " << animal[1]->getBrainIdeas() << std::endl;

    std::cout << BLUE << "Copy Assignment Opeator:: " << END << std::endl;
    animal[2] = new Dog(*animal[1]);
    *animal[2] = *animal[1];
    std::cout << "animal[2]->makeSound(): ";
    animal[2]->makeSound();
    std::cout << "animal[2]->getBrainIdeas(): " << animal[2]->getBrainIdeas() << std::endl;
    std::cout << std::endl;

    std::cout << BLUE << "[Testing Cat classes]" << END << std::endl;
    std::cout << BLUE << "Original: " << END << std::endl;
    animal[3] = new Cat();
    std::cout << "animal[3]->makeSound(): ";
    animal[3]->makeSound();
    std::cout << "animal[3]->getBrainIdeas(): " << animal[3]->getBrainIdeas() << std::endl;

    std::cout << BLUE << "Copy Constructor: " << END << std::endl;
    animal[4] = new Cat(*animal[3]);
    std::cout << "animal[4]->makeSound(): ";
    animal[4]->makeSound();
    std::cout << "animal[4]->getBrainIdeas(): " << animal[4]->getBrainIdeas() << std::endl;

    std::cout << BOLD << BLUE << "Copy Assignment Opeator:: " << END << std::endl;
    animal[5] = new Cat(*animal[4]);
    *animal[5] = *animal[4];
    std::cout << "animal[5]->makeSound(): ";
    animal[5]->makeSound();
    std::cout << "animal[5]->getBrainIdeas(): " << animal[5]->getBrainIdeas() << std::endl;

    // std::cout <<BOLD << BLUE <<  "Deleting Classes ..." << END << std::endl;


    std::cout << BLUE <<  "delete animal[0]" << END << std::endl;
    delete animal[0];
    std::cout << BLUE <<  "delete animal[1]" << END << std::endl;
    delete animal[1];
    std::cout << BLUE <<  "delete animal[2]" << END << std::endl;
    delete animal[2];
    std::cout << BLUE <<  "delete animal[3]" << END << std::endl;
    delete animal[3];
    std::cout << BLUE <<  "delete animal[4]" << END << std::endl;
    delete animal[4];
    std::cout << BLUE <<  "delete animal[5]" << END << std::endl;
    delete animal[5];
}

void end(void)__attribute__((destructor));

void end(void)
{
    system("leaks -q a.out");
}
