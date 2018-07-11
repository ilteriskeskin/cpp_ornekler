#include <iostream>

using namespace std;

int toplama(int sayi1, int sayi2)
{
    int toplam;
    toplam = sayi1 + sayi2;
    return toplam;
}

int main()
{
    int a;
    a = toplama(4, 3);

    cout << "Toplam: " << a << endl;
}