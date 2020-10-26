#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Существует треугольник со сторонами a, b, c"<<endl;
    cout<<"Введите a: ";
    cin>>a;
    cout<<"Введите b: ";
    cin>>b;
    cout<<"Введите с: ";
    cin>>c;
  	if ((a >= (b + c)) || (b >= (a + c)) || (c >= (a + b)))
	cout<<"Высказывание ложно";
    else cout<<"Высказывание истинно";
    return 0;
}
