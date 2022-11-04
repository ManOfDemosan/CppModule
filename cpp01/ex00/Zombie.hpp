#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	void				announce();
	static Zombie	 	*newZombie(std::string name);
	static void 		randomChump(std::string name);
	Zombie();
	Zombie(std::string name);
	~Zombie();
	
};




# endif