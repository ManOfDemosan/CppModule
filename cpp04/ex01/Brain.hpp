#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
 private:
    std::string _ideas[100];
 public:
    Brain();
    Brain(const Brain& obj);
    ~Brain();
    Brain& operator=(const Brain& obj);

    void    setIdea(std::string idea, int i);
    std::string getIdea(int i);
};

#endif
