#pragma once

class rational {
private:
    int a, b;
public:
    rational();
    rational(int a1, int b1);
    void set(int a1, int b1);
    void show();
    rational operator + (rational);
    friend rational operator - (rational& f1, rational& f2);
    rational operator ++ (int);
    bool operator ==(rational);
    bool operator >(rational);
    bool operator <(rational);
    rational operator= (rational f2);
};