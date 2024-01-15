#pragma once

#include <iostream>


class Brain{
    public:
        Brain();
        ~Brain();
        Brain(const Brain &brain);
        Brain &operator=(Brain &brain);

    private:
        std::string ideas[100];
};
