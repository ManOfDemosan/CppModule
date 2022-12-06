#include "Iter.hpp"
#include <iostream>

int main(){
	std::cout << "===============int=============" << std::endl;
    int iArray[5] = {1, 2, 3, 4, 5};
	::iter<int>(iArray, 5, pprint);

	std::cout << "==============double=============" << std::endl;

	double dArray[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
	::iter<double>(dArray, 5, pprint);

	std::cout << "==============char==============" << std::endl;

	char cArray[5] = {'a', 'b', 'c', 'd', 'e'};
	::iter<char>(cArray, 5, pprint);

	std::cout << "============string==============" << std::endl;
	
	std::string sArray[5] = {"hello", "my", "name", "is", "jaehwkim"};
	::iter<std::string>(sArray, 5, pprint);

}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//   Awesome tab2[5];

//   iter( tab, 5, print<int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }