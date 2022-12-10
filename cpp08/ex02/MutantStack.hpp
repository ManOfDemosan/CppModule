#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>

template<typename T>
class MutantStack {
 private:
 public:
  MutantStack();
  MutantStack(const MutantStack& obj);
  ~MutantStack();
  MutantStack& operator=(const MutantStack& obj);
};

#endif
