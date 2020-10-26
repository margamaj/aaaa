#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Цифры числа образуют возрастающую/убывающую последовательность"<<endl;
    cout<<"Введите a: ";
    cin>>a;
    b=a/10%10;
    c=a%10;
    a=a/100;
  	if ((a < b && b < c) || (a > b && b > c))
	cout<<"Высказывание истинно";
    else cout<<"Высказывание ложно";
    return 0;
}
