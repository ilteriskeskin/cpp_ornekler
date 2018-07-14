#include <iostream>
#include <cstring>

using namespace std;

void draw(int, int);

int main(int argc, char const *argv[])
{

    int kenar1, kenar2;

    cout << "1. Kenari giriniz: ";
    cin >> kenar1;
    cout << "2. Kenari giriniz: ";
    cin >> kenar2;

    draw(kenar1, kenar2);

    cout << endl;

    return 0;
}

void draw(int kenar1, int kenar2)
{

    for(int i = 1; i <= kenar1; i++)
        cout << "*";
    cout << endl;

    for(int j = 1; j < kenar2 - 1; j++)
        cout << "*" << string(kenar1 - 2, ' ') << "*" << endl;

    for(int k = 1; k <= kenar1; k++)
        cout << "*";
    cout << endl;
}
