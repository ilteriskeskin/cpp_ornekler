#include "dort.h"
#include "iostream"

using namespace std;

void Dort::topla(int sayi1, int sayi2)
{
    int toplam = sayi1 + sayi2;
    
    cout << "Toplam: " << toplam << endl;
}

void Dort::cikar(int sayi1, int sayi2)
{
    int fark = sayi1 - sayi2;

    cout << "Fark: " << fark << endl;
}

void Dort::carp(int sayi1, int sayi2)
{
    int carpim = sayi1 * sayi2;

    cout << "Carpim: " << carpim << endl;
}

void Dort::bol(int sayi1, int sayi2)
{
    int bolum = sayi1 / sayi2;

    cout << "Bolum: " << bolum << endl;
}
