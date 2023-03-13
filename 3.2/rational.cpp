#include "header.h"
#include <cmath>
#include <iostream>
using namespace std;

rational::rational() {
    a = 1;
    b = 1;
}

rational::rational(int a1, int b1) {
    while (b1==0) {
        cout << "Vvedite normalniy znamenatel" << endl;
        cin >> b1;
    }
    if (a1 > b1) {
        a = a1 - b1 * (a1 / b1);
        b = b1;
    } else {
        a = a1;
        b = b1;
    }
}

void rational::set(int a1, int b1) {
    while (b1==0) {
        cout << "Vvedite normalniy znamenatel" << endl;
        cin >> b1;
    }
    if (a1 > b1) {
        a = a1 - b1 * (a1 / b1);
        b = b1;
    } else {
        a = a1;
        b = b1;
    }
}

void rational::show() {
	cout << a << "/" << b << endl;
};