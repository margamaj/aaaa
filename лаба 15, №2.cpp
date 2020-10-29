#include <iostream>
using namespace std;
int main()
{
    float a, b;
    int signa, signb, sign;
    cout<<"Введите число a: ";
    cin>>a;
    cout<<"Введите число b: ";
    cin>>b;
    if (a==0 && b==0) cout<<"Оба числа являются нулями";
    else {
    if (a==0)
        signa = 0;
    else {
        if (a<0)
            signa = -1;
        else signa = 1;
    }
    if (b==0)
        signb = 0;
    else {
        if (b<0)
            signb = -1;
        else signb = 1;
    }
    cout<<"Значение выражения sign(a) + sign(b): "<<signa+signb;
    }
    return 0;
}
