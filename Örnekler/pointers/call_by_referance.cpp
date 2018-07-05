#include <iostream>

using namespace std;

void Arttir(int *);

int main()
{
	int sayi = 12;

	cout << "Fonksiyondan once : " << sayi << endl;
	Arttir(&sayi);
	cout << "Fonksiyondan sonra: " << sayi << endl;
}

void Arttir(int *a)
{
	(*a)++;
}
