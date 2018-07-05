#include <iostream>

using namespace std;

int* genislet(int *, int, int);

int* kucult(int*, int);

int main()
{
	int *p = new int[5];

	for(int i = 0; i < 5; i++)
	{	
		p[i] = i;
		
		cout << "Eski Alan Deger: " << p[i] << endl;
		cout << "Eski Alan Adres: " << &p[i] << endl;
	}
	
	p = genislet(p,5,5);

	for(int i = 5; i < 10; i++)
	{
		p[i] = i;

		cout << "Yeni Alan Deger: " << p[i] << endl;
		cout << "Yeni Alan Adres: " << &p[i] << endl;
	}

	p = kucult(p, 2);

	for(int i = 0; i < 2; i++)
	{
		p[i] = i;

		cout << "Kucuk Alan Deger: " << p[i] << endl;
		cout << "Kucuk Alan Adres: " << &p[i] << endl;
	}
}

int* genislet(int *eskiAlan, int eskiBoyut, int eklenecek)
{
	int *yeniAlan = new int[eskiBoyut + eklenecek];

	for(int i = 0; i < eskiBoyut; i++)
		yeniAlan[i] = eskiAlan[i];

	delete [] eskiAlan;

	return yeniAlan;
}

int* kucult(int *eskiAlan, int tasinacak)
{
	int *yeni = new int[tasinacak];

	for(int i = 0; i < tasinacak; i++)
		yeni[i] = eskiAlan[i];

	delete [] eskiAlan;

	return yeni;
}
