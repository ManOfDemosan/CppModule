#include "Sadfile.hpp"

int main(int argc, char **argv){
	if(argc != 4){
		std::cerr << "Wrong arguments" << std::endl;
		return 1;
	}
	if(*argv[2] == '\0' || *argv[3] == '\0'){
		std::cerr << "s1 and s2 cannot be empty" << std::endl;
		return 1;
	}
	Sadfile sadfile = Sadfile(argv[1], argv[2], argv[3]);
	return (sadfile.replaceFile());
	
}