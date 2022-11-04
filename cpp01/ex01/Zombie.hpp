#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	void			announce();
	void			setName(std::string name);
	static Zombie	*zombieHorde(int N, std::string name);
	Zombie();
	Zombie(std::string name);
	~Zombie();
	
};




# endif