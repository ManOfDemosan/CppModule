#include "Sadfile.hpp"

Sadfile::Sadfile(std::string filename, std::string s1, std::string s2){
	this->_filename = filename;
	this->_s1 = s1;
	this->_s2 = s2;
}

Sadfile::~Sadfile(){
}

int	Sadfile::_openFile(std::ifstream& readFile, std::ofstream& writeFile){
	readFile.open(_filename);
	if(!readFile.is_open()){
		std::cout << "Fail to open the read_file" << this->_filename <<  std::endl;
		return 1;
	}
	writeFile.open(_filename + ".replace");
	if(!writeFile.is_open()){
		std::cout << "Fail to open the write_file" << this->_filename <<  std::endl;
		return 1;
	}
	return 0;
}

int Sadfile::replaceFile(){
	std::ifstream readFile;
	std::ofstream writeFile;

	if(_openFile(readFile, writeFile)){
		return 1;
	}
	while(!readFile.eof()){
		std::string str;
		std::getline(readFile, str);//readfile의 데이터를 delim이 없으면 '\n'을 기준으로 str로 넘겨준다
		if(!readFile.eof()){
			str += "\n";
		}
		std::string::size_type prev = 0;
		std::string::size_type index;
		while (prev < str.length() && (index = str.find(_s1, prev)) != std::string::npos){
			writeFile << str.substr(prev, index - prev);
			writeFile << _s2;
			prev = index + _s1.length(); // min안써도 되는듯?
		}
		writeFile << str.substr(prev);
	}
	readFile.close();
	writeFile.close();
	return 0;
}
//size, length 개행뺀 문자열의 개수를 반환한다.
//find 함수는 문자열 중 일치하는곳을 반환한다.(문자열, 시작하는곳)
//substr (번째, 갯수)
//min (a, b) a와 b 중에서 작은 값을 리턴한다.