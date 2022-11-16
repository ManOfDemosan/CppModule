#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& obj);
  ~ScavTrap();
  ScavTrap& operator=(const ScavTrap& rhs);
  void guardGate();
  void attack(const std::string& target);
};

#endif

