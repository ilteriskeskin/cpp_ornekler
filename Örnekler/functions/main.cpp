#include <iostream>

using namespace std;

void printmessage();
int toplama(int, int);
void ciftle(int&, int&, int&);

int main()
{
    int a; 
    int x=1, y=3, z=7;

    a = toplama(4, 3);

    cout << "Toplam: " << a << endl;

    printmessage();

    ciftle(x, y, z);

    cout << "x = " << x << " y = " << y << " z = " << z << endl;

    return 0;
}

void printmessage()
{
    cout << "Geriye bir deger donmuyor!" << endl;
}

int toplama(int sayi1, int sayi2)
{
    int toplam;
    toplam = sayi1 + sayi2;
    return toplam;
}

void ciftle(int& a, int& b, int& c)
{
  a*=2;
  b*=2;
  c*=2;
}