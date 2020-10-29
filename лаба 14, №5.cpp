#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout<<"Введите число а: ";
    cin>>a;
    cout<<"Введите число b: ";
    cin>>b;
    c=a;
    d=b;
    if (a==b)
        cout<<"НОД чисел "<<a<<" и "<<a<<": "<<a;
    else {
        while (a != 0 && b != 0) {
            if (a>b)
            a=a%b;
            else
            b=b%a;
        }
    cout<<"НОД чисел "<<c<<" и "<<d<<": "<<a + b;
    }
    return 0;
}
