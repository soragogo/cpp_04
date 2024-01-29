#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
    std::cout << GREEN << BOLD << "Test Started 🚀" << END << std::endl;
    std::cout << BLUE <<  "[Animal Class Test]" << END << std::endl;
    const Animal* meta = new Animal();
    std::cout << "meta->getType(): " << meta->getType() << " " << std::endl;
    std::cout << "meta->makeSound(): " ;
    meta->makeSound();
    std::cout << std::endl;
    std::cout << BLUE <<  "[Dog Class Test]" << END << std::endl;
    const Animal* dog = new Dog();
    std::cout << "dog->getType(): " << dog->getType() << " " << std::endl;
    std::cout << "dog->makeSound(): " ;
    dog->makeSound();
    std::cout << std::endl;
    std::cout << BLUE <<  "[Cat Class Test]" << END << std::endl;
    const Animal* cat = new Cat();
    std::cout << "cat->getType(): " << cat->getType() << " " << std::endl;
    std::cout << "cat->makeSound(): " ;
    cat->makeSound();
    std::cout << std::endl;
    std::cout << BLUE <<  "Deleting Classes ..." << END << std::endl;
    delete meta;
    delete cat;
    delete dog;
    std::cout << std::endl;



    std::cout << GREEN << BOLD << "Now Testing Wrong Class 🚀" << END << std::endl;
    std::cout << BLUE <<  "[WrongAnimal Class Test]" << END << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    std::cout << "wrong_meta->getType(): " << wrong_meta->getType() << " " << std::endl;
    std::cout << "wrong_meta->makeSound(): " ;
    wrong_meta->makeSound();
    std::cout << std::endl;
    std::cout << BLUE <<  "[WrongCat Class Test]" << END << std::endl;
    const WrongAnimal* wrong_cat = new WrongCat();
    std::cout << "wrong_cat->getType(): " << wrong_cat->getType() << " " << std::endl;
    std::cout << "wrong_cat->makeSound(): " ;
    wrong_cat->makeSound();
    std::cout << std::endl;
    std::cout << BLUE <<  "Deleting Classes ..." << END << std::endl;
    delete wrong_meta;
    delete wrong_cat;
}

// void end(void)__attribute__((destructor));

// void end(void)
// {
//     system("leaks -q a.out");
// }
