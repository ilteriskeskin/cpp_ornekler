#include <iostream>

using namespace std;

class Dikdortgen
{
	public:
		int yukseklik, genislik, alan;

		void veriGir()
		{
			cout << "Yukseklik gir: ";
			cin >> yukseklik;
			cout << "Genislik gir : ";
			cin >> genislik;
		}

		void alanBul()
		{
			alan = genislik * yukseklik;
			cout << "Dikdortgenin alani: " << alan << endl;
		}
};

int main()
{
	Dikdortgen dikd1;

	dikd1.veriGir();
	dikd1.alanBul();
}
