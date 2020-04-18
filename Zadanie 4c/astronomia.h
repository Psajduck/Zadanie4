#pragma once
#include <string>

using namespace std;

class astronomia
{
protected:
	string opis, poddziedziny, zawody,strona;

public:
	astronomia();
	~astronomia();
	void wypisz();
	void zapisz();
	void szukaj();

};

