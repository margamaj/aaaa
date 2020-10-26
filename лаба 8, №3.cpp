#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Введите длину отрезка а: ";
    cin>>a;
    cout<<"Введите длину отрезка b: ";
    cin>>b;
    c=a/b;
    a=a-b*c;
    cout<<"Длина незанятой части на отрезке а: "<<a;
    return 0;
}
