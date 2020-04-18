//Jakub Maksajda nr 209976  Zadanie 4a.cpp
//

#include <iostream>
#include "rownanie_kwadratowe.h"

using namespace std;

int main()
{
	float a, b, c;
	cout << "Podaj wartosc wspolczynnik a: ";
	cin >> a;
	cout << "Podaj wartosc wspolczynnik b: ";
	cin >> b;
	cout << "Podaj wartosc wspolczynnik c: ";
	cin >> c;
    rownanie_kwadratowe r1(a,b,c);

    return 0;
}


