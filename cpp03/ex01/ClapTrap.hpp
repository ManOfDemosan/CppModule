#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    unsigned int _hitPoint;//체력이여
    unsigned int _energyPoint;
    unsigned int _attackDamage;
public:
    ClapTrap();
    ClapTrap(const ClapTrap& obj);
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& rhs);
    void attack(const std::string& target); 
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
