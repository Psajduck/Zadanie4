#include "informatyka.h"
#include <iostream>
#include <fstream>
#include <windows.h>
#include <shellapi.h>

informatyka::informatyka()
{
	opis = "Informatyka - dziedzina nauk scislych i techniki zajmujaca sie przetwarzaniem informacji,\nw tym metodami ich przetwarzania oraz technologiami wytwarzania ukladow je przetwarzajacych.";
	poddziedziny = "Elektronika, Elektromechanika, Robotyka, Urzadzenia Techniki Komputerowe, Programowanie, Grafika";
	zawody = "grafik, programista, tester oprogramowania i wiele innych";
	strona = "https://pl.wikipedia.org/wiki/Informatyka";
}

informatyka::~informatyka()
{
}

//void informatyka::wypisz()
//{
//	astronomia::wypisz();
//}

void informatyka::zapisz()
{
	astronomia::zapisz();
}

void informatyka::szukaj()
{
	astronomia::szukaj();
}
