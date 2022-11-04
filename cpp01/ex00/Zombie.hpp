#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	void		announce();
	Zombie	 	*newZombie(std::string _name);
	void 		randomChump(std::string _name);
	Zombie();
	Zombie(std::string name);
	~Zombie();
	
};




# endif