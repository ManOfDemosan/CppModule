#ifndef WRONGWrongAnimal_HPP
# define WRONGWrongAnimal_HPP

# include <iostream>

class WrongAnimal {
 protected:
    std::string _type;
 public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& obj);
    WrongAnimal& operator=(const WrongAnimal& obj);
    virtual ~WrongAnimal();
    virtual void makeSound() const;
    std::string getType() const;
};

#endif