#include "rownanie_kwadratowe.h"
#include <iostream>
#include <math.h>

using namespace std;

rownanie_kwadratowe::rownanie_kwadratowe(float ia, float ib, float ic)
{
	a = ia;
	b = ib;
	c = ic;
	float delta, x0, x1, x2;
	delta = b * b - 4 * a * c;
	if (delta < 0)
	{
		cout << "Rownanie nie posiada rozwiazan rzeczywistych\n";
	}
	else if (delta == 0)
	{
		x0 = -b / 2 * a;
		cout << "Rownanie posiada jedno rozwiazanie rzeczywiste: " << x0 << "\n";
	}
	else
	{
		x1 = (-b - sqrt(delta)) / 2 * a;
		x2 = (-b + sqrt(delta)) / 2 * a;
		cout << "Rownanie posiada dwa rozwiazania: " << x1 << " i " << x2 << "\n";
	}


}
rownanie_kwadratowe::~rownanie_kwadratowe()
{
}


