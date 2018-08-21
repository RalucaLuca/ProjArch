#pragma once

#include <iostream>
#include<string>
#include<list>
class ConvertorBaza
{
public:
	__declspec(dllexport)ConvertorBaza(int numar, int baza);   //__declspec(dllexport) face API-ul
	__declspec(dllexport)~ConvertorBaza();

	__declspec(dllexport)std::string Conv(int nouaBaza);
	__declspec(dllexport)std::string Conv(int nr,int nouaBaza);
	__declspec(dllexport)std::string ConvInBaza10(int BazaNumarului);

private:
	int numar, bazaNumarului;
};

