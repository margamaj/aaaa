#include <iostream>
using namespace std;
int main() {
	int x1, y1, x2, y2, a;
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
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "Расстояние между данными точками равно " << a << endl;
	return 0;
}
