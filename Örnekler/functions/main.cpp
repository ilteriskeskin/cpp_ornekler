#include <iostream>

using namespace std;

void printmessage();
int toplama(int, int);
void ciftle(int&, int&, int&);
void cift(int, int, int);
long factorial(long);

int main()
{
    int a; 
    int x=1, y=3, z=7;
    long number = 5;

    a = toplama(4, 3);

    cout << "Toplam: " << a << endl;

    printmessage();

    cift(x, y, z);

    cout << "x = " << x << " y = " << y << " z = " << z << endl;

    ciftle(x, y, z);

    cout << "x = " << x << " y = " << y << " z = " << z << endl;

    cout << number << "! = " << factorial(number) << endl;

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

void cift(int a, int b, int c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

long factorial(long a)
{
    if (a > 1)
        return (a * factorial(a-1));
    else
        return 1;
}