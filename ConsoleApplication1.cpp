#include <iostream>
#include <cmath>

using namespace std;
class Triangle {
private:
    double a, b, c;
public:
    bool exst_tr() {
        return ((a + b > c) && (b + c > a) && (a + c > b));
    }
    void set(double a1, double b1, double c1) {
        a = a1;
        b = b1;
        c = c1;
    }
    void show() {
        cout << "1 storona: " << a << endl;
        cout << "2 storona: " <<b << endl;
        cout << "3 storona: " << c << endl;
    }
    double perimetr() {
        double p = a + b + c;
        return p;
    }
    double square() {
        double p = (a + b + c) / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }
};

int main() {
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "vvedi" << i + 1 << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            cout << "ne sush" << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        cout << "perimetr:" << mas[i].perimetr() << endl;
        cout << "ploshad:" << mas[i].square() << endl;
    }
    return 0;
}