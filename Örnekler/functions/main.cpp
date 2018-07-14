#include <iostream>

using namespace std;

void printmessage();
int toplama(int, int);

int main()
{
    int a;
    a = toplama(4, 3);

    cout << "Toplam: " << a << endl;

    printmessage();
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