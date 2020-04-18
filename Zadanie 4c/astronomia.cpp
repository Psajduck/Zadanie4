#include "astronomia.h"
#include <iostream>
#include <fstream>
#include <windows.h>
#include <shellapi.h>



using namespace std;

astronomia::astronomia()
{
	opis = "Astronomia - Nauka przyrodnicza zajmujaca sie badaniem cial niebieskich oraz zjawisk,\nktore zachodza poza Ziemia, jak rowniez tych, ktore oddzialuja w jej atmosferze";
	poddziedziny = "Astrobiologia, Astrofizyka, Astronomia grawitacyjna";
	zawody = "praca w obserwatoriach astronomicznych, instytutach astrofizycznych, i wiele innych";
	strona = "https://wikipedia.org/wiki/Astronomia";
}

astronomia::~astronomia()
{
}

void astronomia::wypisz()
{
	cout << opis << endl;
	cout <<"Poddziedziny to miedzy innymi: "<< poddziedziny << endl;
	cout <<"Proponowane zawody: "<< zawody << endl;
}

void astronomia::zapisz()
{
	string nazwa;
	cout << "Podaj nazwe pliku: ";
	getline(cin, nazwa);
	ofstream plik(nazwa+".txt");
	plik << opis << endl;
	plik << "Poddziedziny to miedzy innymi: " << poddziedziny << endl;
	plik << "Proponowane zawody: " << zawody << endl;
	plik.close();
	cout << "Dane zostaly zapisane do pliku " << nazwa+".txt" << endl;
}

void astronomia::szukaj()
{
	ShellExecuteA(NULL, "open", strona.c_str(), NULL, NULL, SW_SHOWNORMAL);
}
