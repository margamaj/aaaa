#include <iostream>
using namespace std;
int main() {
	int x1, x2, x3, y1, y2, y3;
	float ab, bc, ac, p, p2, s;
	cout << "Введите координаты точки а: " << endl;
	cout << "x1: " << endl;
	cin >> x1;
	cout << "y1: " << endl;
	cin >> y1;
	cout << "Введите координаты точки b: " << endl;
	cout << "x2: " << endl;
	cin >> x2;
	cout << "y2: " << endl;
	cin >> y2;
	cout << "Введите координаты точки c: " << endl;
	cout << "x3: " << endl;
	cin >> x3;
	cout << "y3: " << endl;
	cin >> y3;
	ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	bc = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	ac = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	if ((ab >= (bc + ac)) || (bc >= (ab + ac)) || (ac >= (ab + bc)))
	cout<<"Такого треугольника не существует";
	else {
	p = ab + bc + ac;
	p2 = p / 2;
	s = sqrt(p2 * (p2 - ab) * (p2 - bc) * (p2 - ac));
	    cout << "Периметр треугольника равен: " << p << endl;
	    cout << "Площадь треугольника равна: " << s << endl;
	}
	return 0;
}
