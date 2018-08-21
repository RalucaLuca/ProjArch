#include "ConvertorBaza.h"

//In h se declara ce folosim in proiect

ConvertorBaza::ConvertorBaza(int nr, int bazaInCareSeAfla) 
{
	numar = nr;
	this->bazaNumarului = bazaInCareSeAfla; // sau baza=baza
}

ConvertorBaza::~ConvertorBaza()
{
}
std::string ConvertorBaza::Conv(int nouaBaza)
{
	int copie = numar;
	std::string s;
	std::list<int> rezultat;
	while (copie != 0)
	{
		rezultat.push_front(copie % nouaBaza);
		copie = copie / nouaBaza;
	} 

	for (auto x : rezultat) {
		s =s + std::to_string(x);
	}
	return s;
}

std::string ConvertorBaza::Conv(int nr,int nouaBaza)
{
	std::string s;
	std::list<int> rezultat;
	while (nr != 0)
	{
		rezultat.push_front(nr % nouaBaza);
		nr = nr / nouaBaza;
	}

	for (auto x : rezultat) {
		s = s + std::to_string(x);
	}
	return s;
}

std::string ConvertorBaza::ConvInBaza10(int BazaNumar)
{
	int copie = numar;
	int nrInBaza10 = 0, putere;
	int exp = 0, ultimacifra;

	std::string s;
	std::list<int> rezultat;

	while (copie > 0) {

		ultimacifra = copie % 10;
		copie = copie / 10;
		putere = pow(BazaNumar, exp);
		nrInBaza10 = nrInBaza10 + ultimacifra * putere;
		exp++;
	}

	while (nrInBaza10 > 0)
	{
		rezultat.push_back(nrInBaza10%10);
		nrInBaza10 /= 10;
	}

	for (auto x : rezultat) {
		s = s + std::to_string(x);
	}
	return s;
}



