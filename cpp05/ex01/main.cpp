#include "Bureaucrat.hpp"

int main(){
 try
	{
		std::cout << "=============정상 생성==========="<< std::endl;
		std::cout << std::endl;
        Bureaucrat a("jaehwkim", 150);
		Bureaucrat b;

		std::cout << a;
		std::cout << b;
        std::cout << std::endl;
		std::cout << "========== 업 OR 디 그레이드========"<< std::endl;
		std::cout << std::endl;
        a.upGrade();
		b.deGrade();
        std::cout << std::endl;
		std::cout << "============= 의 결과 ============="<< std::endl;
        std::cout << std::endl;
		std::cout << a;
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}