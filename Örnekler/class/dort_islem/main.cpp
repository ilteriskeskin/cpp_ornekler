#include "dort.h"
#include <iostream>

using namespace std;

int main()
{
    Dort islem; // Dort sınıfından islem adında nesne oluşturduk

    int secim, sayi1, sayi2;

    cout << "1-Toplama" << endl
        << "2-Cikarma" << endl
        << "3-Carpma" << endl
        << "4-Bolme" << endl
        << "5-Cikis" << endl;
    
    cin >> secim;

    cout << "Birinci sayiyi giriniz: ";
    cin >> sayi1;
    cout << "Ikinci sayiyi giriniz : ";
    cin >> sayi2;

    while(1)
    {
        if(secim == 1){
            islem.topla(sayi1, sayi2);
            break;
        }
        else if(secim == 2){
            islem.cikar(sayi1, sayi2);
            break;
        }
        else if(secim == 3){
            islem.carp(sayi1, sayi2);
            break;
        }
        else if(secim == 4){
            islem.bol(sayi1, sayi2);
            break;
        }
        else if(secim == 5){
            cout << "Cikis Yapiliyor..." << endl;
            break;
        }
        else{
            cout << "Hatali secim!" << endl;
            break;
        }
    }
}
