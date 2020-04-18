#include "trojkat_pascala.h"
#include <iostream>
#include <iomanip>
using namespace std;
trojkat_pascala::trojkat_pascala(int n)
{
	ilosc = n;
    int k = 1;

    for (int i = 0; i < ilosc; i++)
    {
        for (int space = 1; space <= ilosc - i; space++)
            cout << setw(4)<<" ";

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                k = 1;
            else
                k = k * (i - j + 1) / j;

            cout << k <<setw(8);
        }
        cout << "\n";
    }
    cout << "\n";
}

trojkat_pascala::~trojkat_pascala()
{
}
