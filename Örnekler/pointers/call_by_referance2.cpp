#include <iostream>

using namespace std;

int Degistir(int *, int *);

int main()
{
	int sayi1 = 3;
	int sayi2 = 5;

	int sonuc = Degistir(&sayi1, &sayi2);
	cout << "Sonuc: " << sonuc << endl;
}

int Degistir(int *sayi1, int *sayi2)
{
	cout << "ilk sayi1 : " << sayi1 << endl;
	cout << "ilk sayi2 : " << sayi2 << endl;
	cout << "ilk *sayi1: " << *sayi1 << endl;
	cout << "ilk *sayi2: " << *sayi2 << endl;

	*sayi1 = 20;
	*sayi2 = 40;

	cout << "son sayi1 : " << sayi1 << endl;
	cout << "son sayi2 : " << sayi2 << endl;
	cout << "son *sayi1: " << *sayi1 << endl;
	cout << "son *sayi2: " << *sayi2 << endl;

	return *sayi1 + *sayi2;
}
