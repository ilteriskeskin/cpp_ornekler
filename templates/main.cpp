#include <iostream>

using namespace std;

template <class T>
T sum(T x, T y)
{
    T result;
    result = x + y;
    return result;
}

int main(int argc, char const *argv[])
{
    
    int a = 3, b = 2, c;
    double d = 7.12, e = 2.4, f;

    c = sum<int>(a,b);
    f = sum<double>(d,e);

    cout << c << endl << f << endl;

    return 0;
}
