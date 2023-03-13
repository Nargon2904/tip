#include<iostream>
#include "header.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int n = 2;
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
    arr[2] = arr[0] + arr[1];
    arr[2].show();
    arr[3] = arr[0] - arr[1];
    arr[3].show();
    arr[4] = arr[0]++;
    arr[4].show();
    cout << "первая дробь равна второй: " << (arr[0] == arr[1]) << endl;
    cout << "первая дробь больше второй: " << (arr[0] > arr[1]) << endl;
    rational example = arr[0];
    example.show();
    return 0;
}