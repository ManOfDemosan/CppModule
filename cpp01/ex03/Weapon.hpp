#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string name);
	~Weapon();
	const std::string&	getType() const;
	void		setType(std::string type);
};



#endif