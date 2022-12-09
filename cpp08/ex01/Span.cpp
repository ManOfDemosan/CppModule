#include "Span.hpp"

Span::Span():_size(0) {}
Span::Span(unsigned int N):_size(N) {}
Span::Span(const Span& obj):_size(obj.getSize()), _capacity(getCapacity()) {}
Span::~Span() {}
Span& Span::operator=(const Span& obj) {
	if(this != &obj){
		_size = obj.getSize();
		_capacity = obj.getCapacity();
	}
	return (*this);
}


std::vector<unsigned int>	Span::getCapacity() const {
	return _capacity;
}

unsigned int Span::getSize() const{
	return _size;
}

void Span::addNumber(int num){
	if(_capacity.size() == _size)
		throw FullCapacity();
	_capacity.push_back(num);
}

unsigned int Span::shortestSpan(){

}

unsigned int Span::longestSpan(){

}

const char *Span::FullCapacity::what(void) const throw()
{
	return "Capacity 의 자리가 없어요!";
}