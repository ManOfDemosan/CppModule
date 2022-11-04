#include "Zombie.hpp"

int main(){
	Zombie zombie1;
	Zombie zombie2("2. stack_zom");
	Zombie *zombie3 = Zombie::newZombie("3. heap_zom");

	Zombie::randomChump("4. Remote Zom");
	zombie1.announce();
	zombie2.announce();
	zombie3->announce();
	delete zombie3;
	return 0;
}