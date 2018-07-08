#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    string str;
    string str2 {"Merhaba!"};
    int x = 1;

    while (n>0) 
    {
        cout << n << ", ";
        --n;
    }

    cout << "Ucusss!!\n";

    do 
    {
        cout << "Bir mesaj giriniz: ";
        getline (cin,str);
        cout << "Mesajiniz        : " << str << '\n';
    }     
    while (str != "hoscakal");

    for (int n=10; n>0; n--) 
    {
        cout << n << ", ";
    }

    cout << "Ucusss!!\n";

    for (char c : str2)
    {
        cout << "[" << c << "]";
    }
    
    cout << '\n';

    for (int n=10; n>0; n--)
    {
        cout << n << ", ";
        if (n==3)
        {
            cout << "Sayaç durdu" << endl;
            break;
        }
    }

    for (int n = 10; n > 0; n--) 
    {
        if (n == 5) continue;
            cout << n << ", ";
    }
    cout << "Ucusss!!\n";
}