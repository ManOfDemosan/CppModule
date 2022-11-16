#include "FragTrap.hpp"

int main(){
	FragTrap a("jaehwan");
	FragTrap b;

    a.attack("B");
	b.takeDamage(3);
	b.beRepaired(2);
	b.attack("A");
	a.highFivesGuys();
	a.takeDamage(100);
	a.beRepaired(100);
}
