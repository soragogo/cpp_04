#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>


class Brain{
    public:
        Brain();
        ~Brain();
        Brain(const Brain &brain);
        Brain &operator=(Brain &brain);
        std::string* getIdeas(void);
        void setIdeas(std::string* ideas);

    private:
        std::string ideas[100];
};

#endif
