#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
    string mesaj;
    string sozel;
    float fiyat;
    int miktar;

    cout << "Mesajiniz: ";
    getline(cin, mesaj);
    cout << mesaj << endl;

    cout << "Kalem fiyatini giriniz: ";
    getline(cin, sozel);
    stringstream(sozel) >> fiyat;

    cout << "Alacaginiz kalem miktarini giriniz: ";
    getline(cin, sozel);
    stringstream(sozel) >> miktar;

    cout << "Toplam Fiyat: " << miktar * fiyat << endl;
}