#include <iostream>
#include <new>

using namespace std;

int main(int argc, char *argv[])
{
	int a;
	int * p;
	int i;

	cout << "Dizinin boyutunu giriniz: ";
	cin >> a;
	
	p = new int[a];
	
	for(i = 0; i < a; i++)
	{
		p[i] = i * i;
	}

	for(i = 0; i < a; i++)
	{
		cout << "p[" << i << "] = " << p[i] << endl;
	}	

	delete[] p;

	return 0;
}
