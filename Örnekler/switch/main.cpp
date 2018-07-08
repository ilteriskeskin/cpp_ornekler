#include <iostream>

using namespace std;


int main()
{
    int x = 2;
    
    switch (x) 
    {
        case 1:
        case 2:
        case 3:
            cout << "x = 1, 2 ya da 3";
            break;
        default:
            cout << "x != 1, 2 ya da 3";
    }
}