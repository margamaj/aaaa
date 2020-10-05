#include <iostream>
using namespace std;
int main() {
	int x1, y1, x2, y2, s, p, x, y;
	cout << "Введите координаты первой точки: " << endl;
	cout << "x1: " << endl;
	cin >> x1;
	cout << "y1: " << endl;
	cin >> y1;
	cout << "Введите координаты второй точки: " << endl;
	cout << "x2: " << endl;
	cin >> x2;
	cout << "y2: " << endl;
	cin >> y2;
	x = abs(x2-x1);
	y = abs(y2-y1);
	p = (x+y)*2;
	s = x*y;
	cout << "Периметр прямоугольника равен: " << p << endl;
	cout << "Площадь прямоугольника равна: " << s << endl;
	return 0;
}
