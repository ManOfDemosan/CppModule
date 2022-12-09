#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
 private:
  unsigned int _size;
  std::vector<unsigned int> _capacity;

 public:
  Span();
  Span(unsigned int N);
  Span(const Span& obj);
  ~Span();
  Span& operator=(const Span& obj);

 unsigned int getSize() const;
 std::vector<unsigned int>getCapacity() const;

 void addNumber(int num);
 unsigned int shortestSpan();
 unsigned int longestSpan();

 class FullCapacity: public std::exception {
		public:
			const char* what() const throw();
	};
};

#endif