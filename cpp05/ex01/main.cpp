#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
 try
	{
		std::cout << "=============Burea 정상 생성==========="<< std::endl;
        Bureaucrat a;
		Bureaucrat b("jaehwkim", 150);
		Form	c("군주론 출판권", 10, 10);

		std::cout << a;
		std::cout << b;
        std::cout << std::endl;

		std::cout << "=============Form 정상 생성==========="<< std::endl;
		std::cout << c;
        std::cout << std::endl;

		// std::cout << "========== 업 OR 디 그레이드========"<< std::endl;
		// std::cout << std::endl;
        // a.upGrade();
		// b.deGrade();
        // std::cout << std::endl;

		std::cout << "=============Form 사인 해보기==========="<< std::endl;
		a.signeForm(c);
		b.signeForm(c);
		std::cout << std::endl;
		// std::cout << "============= 의 결과 ============="<< std::endl;
        // std::cout << std::endl;
		// std::cout << a;
		// std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}