#include "Conversion.hpp"

int main(int argc, char **argv){
    if(argc != 2){
        std::cerr << "Only two parameters are accepted!" << std::endl;
    }
    else
        std::cout << Conversion(argv[1]);
}