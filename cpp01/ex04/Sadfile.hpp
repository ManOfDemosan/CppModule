#ifndef SADFILE_HPP
# define SADFILE_HPP
# include <iostream>

class Sadfile
{
private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
	
public:
	Sadfile(std::string _filename, std::string _s1, std::string _s2);
	~Sadfile();
};




#endif