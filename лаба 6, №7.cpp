#include <iostream>
using namespace std;
int main()
{
    int a, b, c; //b, c - 2 вспомогательные переменные
    cout<<"Введите а:"<<endl;
    cin>>a;
    b=a*a*a; //1 операция, а^3
    c=a*a*a; //2 операция, a^3
    a=b*c; //3 операция, a^6
    b=c*c*c; //4 операция, a^9
    c=a*b; //5 операция, a^15
    cout<<"a в 15 степени равно: "<<c<<endl;
    return 0;
}
