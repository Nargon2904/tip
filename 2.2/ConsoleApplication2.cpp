#include <iostream>
#include "Header.h"
#include <cmath>

using namespace std;

int main() {
	//введите 0 0 1 \ 1 1 2.5 \ 1 1 1, чтобы проверить работу функций
	setlocale(LC_ALL, "Rus");
	float x, y, r;
	circle mas[3];
	for (int i = 0; i < 3; i++) {
		cout << "Введите х, у и радиус " << i + 1 << "-й окружности: " << endl;
		cin >> x >> y >> r;
		mas[i].set_circle(r, x, y);
	}
	for (int i = 0; i < 3; i++) {
		cout << "Площадь " << i + 1 << "-й окружности: " << endl;
		cout << mas[i].square() << endl;
		cout << "Можно ли вписать в " << i + 1 << "-ю окружность треугольник с длинами сторон 3, 4, 5?" << endl;
		if (mas[i].triangle_in(3, 4, 5)) {
			cout << "Да" << endl;
		}
		else {
			cout << "Нет" << endl;
		}
		cout << "Можно ли описать около " << i + 1 << "-й окружности треугольник с длинами сторон 5, 12, 13?" << endl;
		if (mas[i].triangle_around(5, 12, 13)) {
			cout << "Да" << endl;
		}
		else {
			cout << "Нет" << endl;
		}
		cout << "Пересекается ли " << i + 1 << "-я окружность с Circle (4, 1, 3)?" << endl;
		if (mas[i].check_circle(4, 1, 3)) {
			cout << "Да" << endl;
		}
		else {
			cout << "Нет" << endl;
		}
	}
}