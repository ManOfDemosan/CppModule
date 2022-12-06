#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void    iter(const T *array, const unsigned int len, void(*f)(const T& elem)){
    for (unsigned int i = 0; i < len; i++)
		f(array[i]);
}

template<typename T>
void    iter(T *array, unsigned int len, void(*f)(T&)){
    for (unsigned int i = 0; i < len; i++)
		f(array[i]);
}


template<typename T>
void pprint(const T& elem){
    std::cout << elem << std::endl;
}

template<typename T>
void pprint(T& elem){
    std::cout << elem << std::endl;
}

#endif


