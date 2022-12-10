#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{
 public:
	MutantStack() : std::stack<T>(){}
	~MutantStack(){}
	MutantStack<T>(MutantStack<T> const & obj) : std::stack<T>(obj){}
	MutantStack<T> & operator =(MutantStack<T> const & obj){
		this->c = obj->c;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	iterator begin(void){
		return (this->c.begin());
	}
	iterator end(void){
		return (this->c.end());
	}
	reverse_iterator rbegin(void) {
		return this->c.rbegin();
	}
	reverse_iterator rend(void) {
		return this->c.rend();
	}
};

#endif
