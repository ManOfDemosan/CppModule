#ifndef SADFILE_HPP
# define SADFILE_HPP
# include <iostream>
# include <fstream>

class Sadfile
{
private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
		int	_openFile(std::ifstream& readFile, std::ofstream& writeFile);
public:
	Sadfile(std::string _filename, std::string _s1, std::string _s2);
	~Sadfile();
	int	replaceFile();
};




#endif