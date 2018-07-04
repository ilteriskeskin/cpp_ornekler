#include <iostream>

using namespace std; 

int func(int, int);
double func(double, double);

int main(int argc, char const *argv[])
{
    int x = 3, y = 5;
    double n = 3.4, m = 1.7;
    
    cout << func (x,y) << endl;
    cout << func (n,m) << endl;
    
    return 0;
}

int func(int x, int y)
{
    return x + y;
}

double func(double a, double b)
{
    return a / b;
}