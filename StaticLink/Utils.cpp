#include "Utils.h"



Utils::Utils()
{
}


Utils::~Utils()
{
}

std::string Utils::f()
{
	std::string ss;
	ConvertorBaza obj = ConvertorBaza(42, 4);

	for (int i = 2; i <= 9; i++) {
		
		ss += "Numarul in baza " + std::to_string(i) + " este ";	
		ss += obj.Conv(i);
		ss += "\n";
	}
	
	return ss;
}

std::string Utils::f2(int numar,int bazaInCareSeAfla)
{
	std::string ss;
	ConvertorBaza obj = ConvertorBaza(numar, bazaInCareSeAfla);

	if (bazaInCareSeAfla == 10)
	{
		for (int i = 2; i <= 9; i++)
		{
			ss += "Numarul in baza " + std::to_string(i) + " este ";
			ss += obj.Conv(i);
			ss += "\n";
		}
		return ss;
	}
	else
	{
		ss += "Numarul in baza 10 este ";
		ss += obj.ConvInBaza10(bazaInCareSeAfla);
		ss += "\n";

		int nr = std::stoi(obj.ConvInBaza10(bazaInCareSeAfla));

		for (int i = 2; i <= 9; i++)
		{
			ss += "Numarul in baza " + std::to_string(i) + " este ";
			ss += obj.Conv(nr,i);
			ss += "\n";
		}
		return ss;
	}

}


