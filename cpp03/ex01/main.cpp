#include "ScavTrap.hpp"

int main(){
	ScavTrap a("jaehwan");
	ScavTrap b;

    a.attack("B");
	b.takeDamage(3);
	b.beRepaired(2);
	b.attack("A");
	a.guardGate();
	a.takeDamage(100);
	a.beRepaired(100);
}
