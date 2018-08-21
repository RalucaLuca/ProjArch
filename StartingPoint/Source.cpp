#include <iostream>
#include "../StaticLink/Utils.h"


int main() 
{
	//std::cout << Utils::f();

	int numar, baza;
	
	std::cout << "Numarul este: ";
	std::cin >> numar;
	std::cout<<"Baza numarului este: ";
	std::cin>> baza;

	std::cout << Utils::f2(numar, baza);
	return 0;

}