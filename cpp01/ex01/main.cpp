#include "Zombie.hpp"
#define NUM 3

int main(){
	Zombie zombie1;
	Zombie zombie2("2. stack_zom");
	Zombie *zombie3 = Zombie::zombieHorde(NUM, "XXzomXX");

	zombie1.announce();
	zombie2.announce();
	for(int i = 0; i < NUM; i++){
		zombie3[i].announce();
	}
	delete[] zombie3;
	return 0;
}