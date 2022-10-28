#include "Contact.hpp"

std::string Contact::getFirstName() const
{
	return this->_firstName;
}

int main() {
	Contact home;
	Contact mobile;


	home.getFirstName();
	mobile.getFirstName();
}