#include <iostream>
#include <tuple>
#include <cmath>

using namespace std;

tuple<int, double> returnTwoValue(){

    int num1 = 10;
    double num2 = 20;

    return  make_tuple(num1, num2);
}

int main(){
    auto t = returnTwoValue();

    cout << get<0>(t) << endl << get<1>(t) << endl;
}