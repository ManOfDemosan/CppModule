#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("A");
	ClapTrap b("B");

	a.attack("B");
	b.takeDamage(3);
	b.beRepaired(2);
	b.attack("A");
	a.takeDamage(100);
	a.beRepaired(100);
	return (0);
}