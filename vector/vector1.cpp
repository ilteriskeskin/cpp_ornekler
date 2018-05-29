#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> sayiVektor;

	cout << "Ilk boyut : " << sayiVektor.size() << endl;
	
	sayiVektor.push_back(1);
	
	cout << "Yeni Boyut: " << sayiVektor.size() << endl;

	cout << "Vektorun 0. elemani: " << sayiVektor[0] << endl;	
	
	sayiVektor.push_back(-1);
	cout << "Yeni Boyut: " << sayiVektor.size() << endl;
	cout << "Vektorun 1. elemani: " << sayiVektor[1] << endl;

	return 0;
}

