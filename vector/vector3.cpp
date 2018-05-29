#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <float> sayiVektor;
	float toplam = 0, c, sayi = 0;

	while(sayi != -1)
	{
		cout << "Bir sayi girin, cikis icin -1: ";
		cin >> sayi;
		if(sayi == -1)
			continue;
		else
			sayiVektor.push_back(sayi);
	}

	while(!sayiVektor.empty())
	{
		c = sayiVektor.back();
		toplam += c;
		sayiVektor.pop_back();
	}
	cout << "Girilen sayilarin toplami: " << toplam << endl;

	return 0;
}
