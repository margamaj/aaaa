#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout<<"Треугольник со сторонами a, b, c является прямоугольным»."<<endl;
    cout<<"Введите a: ";
    cin>>a;
    cout<<"Введите b: ";
    cin>>b;
    cout<<"Введите с: ";
    cin>>c;
  	if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
	cout<<"Высказывание истинно";
    else cout<<"Высказывание ложно";
    return 0;
}
