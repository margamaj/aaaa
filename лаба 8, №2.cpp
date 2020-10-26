#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d;
    cout<<"Введите значение переменной а: ";
    cin>>a;
    cout<<"Введите значение переменной b: ";
    cin>>b;
    c=b;
    while (a>b) {
        b=b+c;
        d=d+1;
    }
    cout<<"Количество отрезков b, умещающихся на отрезке а: "<<d;
    return 0;
}
