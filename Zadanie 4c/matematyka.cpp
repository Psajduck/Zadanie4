#include "matematyka.h"
#include <iostream>
#include <fstream>
#include <windows.h>
#include <shellapi.h>

matematyka::matematyka()
{
	opis = "Matematyka - nauka dostarczajaca narzedzi do otrzymywania scislych wnioskow z przyjetych zalozen";
	poddziedziny = "Algebra, Analiza matematyczna, Geometria";
	zawody = "aktuariusz, statystyk, analityk rynku i wiele innych";
	strona = "https://pl.wikipedia.org/wiki/Matematyka";
}

matematyka::~matematyka()
{
}

void matematyka::wypisz()
{
	astronomia::wypisz();
}

void matematyka::zapisz()
{
	astronomia::zapisz();
}

void matematyka::szukaj()
{
	astronomia::szukaj();
}
