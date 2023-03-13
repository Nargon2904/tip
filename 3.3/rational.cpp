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

rational rational::operator + (rational other){
    rational res;
    res.set(this->a * other.b + other.a * this->b, this->b * other.b);
    return res;
}

rational operator- (rational& f1, rational& f2) {
	rational res;
	res.set(f1.a * f2.b - f2.a * f1.b, f1.b * f2.b);
	return res;
};

rational rational::operator ++ (int){
    rational res;
    res.set(this->a + 1, this->b);
    return res;
}

bool rational::operator==(rational other) {
    return (float(this->a) / float(this->b)) == (float(other.a) / float(other.b));
}

bool rational::operator>(rational other) {
    return (float(this->a) / float(this->b)) > (float(other.a) / float(other.b));
}

bool rational::operator<(rational other) {
    return (float(this->a) / float(this->b)) < (float(other.a) / float(other.b));
}

rational rational::operator= (rational f2) {
	if (this == &f2) {
		return *this;
	}
	a = f2.a;
	b = f2.b;
	return *this;
}
