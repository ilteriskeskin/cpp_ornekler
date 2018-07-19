#include <iostream>

using namespace std;

class Sinif
{
	private:
		int x, y;

	public:
		void get_xy(int a, int b)
		{
			x = a;
			y = b;
		}

		void xy_yazdir()
		{
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
		}
};

int main(int argc, char *argv[])
{

	int x, y;
	Sinif nesne1;
	

	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	nesne1.get_xy(x, y);

	nesne1.xy_yazdir();

	return 0;
}
