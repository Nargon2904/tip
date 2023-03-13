#include<iostream>
#include "header.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cin >> n;
    rational* arr = new rational[n];
    int a, b;
    for (int i = 0; i < n; i++) {
        cout << "числитель: ";
        cin >> a;
        cout << "знаменатель: ";
        cin >> b;
        arr[i].set(a, b);
        arr[i].show();
    }
    return 0;
}