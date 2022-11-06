#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);//club을 넘길때 참조자로 넘겨서 사용 그렇지 않으면 복사가 되어 사용됨
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		
		HumanB jim("Jim");
		jim.setWeapon(club);// 생성자에서 따로 받지 않을때 그냥 club이라는 클래스의 주소값을 가져가도 되는 이유는 class도 int 처럼 자료형이기 때문이다
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}