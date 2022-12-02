#ifndef DATA_HPP
#define DATA_HPP

# include <string>
# include <iostream>

class Data {
 private:
	int _num;
 public:
  Data();
  Data(int num);
  Data(const Data& obj);
  ~Data();
  Data& operator=(const Data& obj);

 int	getNum() const;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
