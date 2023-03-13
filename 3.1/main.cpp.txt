#include<iostream>
#include "header.h"
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    eq2 exmpl(a, b, c);
    eq2 exmpl1(a, b, c);
    cout << exmpl.find_Y(6) << endl;
    eq2 exp3 = exmpl + exmpl1;
    cout << exp3.find_Y(6);
    return 0;
}