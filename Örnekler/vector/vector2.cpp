#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> sayiVektor(10);
	for(int i = 0; i < 10; i++)
		cout << sayiVektor[i] << " ";
	cout << endl;

	cout << "--------------------------------" << endl;

	vector <int> sayiVektor2(10, -2);
	for(int i = 0; i < 10; i++)
		cout << sayiVektor2[i] << " ";
	cout << endl;

	cout << "--------------------------------" << endl;
	
	vector <int> sayiVektor3;
	sayiVektor3.assign(5,23);
	for(int i = 0; i < 5; i++)
		cout << sayiVektor3[i] << " ";
	cout << endl;

	cout << "--------------------------------" << endl;

	int a = sayiVektor3.back();
	cout << a << endl;

	return 0;
}
