#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Default Brain is called" << std::endl;
    for(int i = 0; i < 100; i++){
        this->_ideas[i] = "생각들";
    }
}

Brain::Brain(const Brain& obj) {
    std::cout << "Copy Brain is called" << std::endl;
        for(int i = 0; i < 100; i++){
        this->_ideas[i] = obj._ideas[i];
    }
}

Brain& Brain::operator=(const Brain& obj) {
       for(int i = 0; i < 100; i++){
        this->_ideas[i] = obj._ideas[i];
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "Your Brain is distroyed" << std::endl;
}

void			Brain::setIdea(std::string idea, int i){
	this->_ideas[i] = idea;
	return ;
}

std::string		Brain::getIdea(int i){
	return (this->_ideas[i]);
}