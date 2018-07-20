#include <iostream>

using namespace std;

int main()
{
	int a = 12;

	int* p = &a;

	cout << "p  : " << p << endl;
	cout << "&a : " << &a << endl;
	cout << "*p : " << *p << endl;
	cout << "a  : " << a << endl;

	// Yeni değer atanıyor. a = 25
	
	*p = 25;

	cout << "p  : " << p << endl;
	cout << "&a : " << &a << endl;
	cout << "*p : " << *p << endl;
	cout << "a  : " << a << endl;

}
