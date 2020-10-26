#include <iostream>
using namespace std;
int main()
{
    int a, b, c, s;
    cout<<"Введите число a: ";
    cin>>a;
    cout<<"Введите число b: ";
    cin>>b;
    cout<<"Введите число c: ";
    cin>>c;
    s = a * b - c * c;
    c = (a / c) * (b / c);
    cout<<"Количество квадратов, размещенных в прямоугльнике: "<<c<<endl;
    cout<<"Площадь незанятого прямоугольника: "<<s;
    return 0;
}
