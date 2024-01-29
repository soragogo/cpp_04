/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:22:11 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/29 11:54:22 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << GREEN << BOLD << "Test Started 🚀" << END << std::endl;

    std::cout << BLUE << "Instanciating Cat class 😺" << END << std::endl;
    Cat cat;
    std::cout << BLUE << "Instanciating Dog class 🐶" << END << std::endl;
    Dog dog;

    std::cout << BLUE << "Everything is same as ex01, except that Animal class cannot be instanciated" << END << std::endl;
    std::cout << BLUE << "Therefore, the code below throws an error" << END << std::endl;
    std::cout << "-------------------" << std::endl;
    // Animal animal;
    std::cout << "-------------------" << std::endl;
}

// void end(void)__attribute__((destructor));

// void end(void)
// {
//     system("leaks -q a.out");
// }
