#include "Sadfile.hpp"

int main(int argc, char **argv){
	if(argc != 4){
		std::cerr << "Wrong arguments" << std::endl;
		return 1;
	}
	Sadfile sadfile = Sadfile(argv[1], argv[2], argv[3]);
}