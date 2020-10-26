#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout<<"Данное число читается одинаково слева направо/справа налево"<<endl;
    cout<<"Введите a: ";
    cin>>a;
    d=a%10;
    b=a/100%10;
    c=a/10%10;
    a=a/1000;
  	if (a == d && c == b)
	cout<<"Высказывание истинно";
    else cout<<"Высказывание ложно";
    return 0;
}
