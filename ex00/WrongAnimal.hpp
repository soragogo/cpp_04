#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal{
    public:
        WrongAnimal();
        // ~WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &wanimal);
        WrongAnimal &operator=(WrongAnimal &wanimal);
        void makeSound() const;
        std::string getType() const;


    protected:
        std::string type;
};

// color
#define END             "\033[0m"
#define BOLD            "\033[1m"
#define BLACK           "\033[30m"
#define RED             "\033[31m"
#define GREEN           "\033[32m"
#define YELLOW          "\033[33m"
#define BLUE            "\033[34m"
#define MAGENTA         "\033[35m"
#define CYAN            "\033[36m"
#define WHITE           "\033[37m"
#define UNDERLINE       "\033[4m"
#define BOLD_UNDERLINE  "\033[1;4m"

#endif
