#include <iostream>
using namespace std;
int main()
{
    float x;
    int sign;
    cout<<"Введите число х: ";
    cin>>x;
    if (x==0)
        cout<<"Это число - ноль";
    else {
        cout<<"Знак числа ";
        if (x<0)
            cout<<"отрицательный";
        else cout<<"положительный";
    }
    return 0;
}
