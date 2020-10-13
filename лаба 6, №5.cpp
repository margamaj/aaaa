#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Функция: y=4*(x-3)^6-7*(x-3)^3+2"<<endl;
    cout<<"Введите аргумент функции: ";
    cin>>x;
    y=4*((x-3)*(x-3)*(x-3)*(x-3)*(x-3)*(x-3))-7*((x-3)*(x-3)*(x-3))+2;
    cout<<"Функция равна: "<<y;
    return 0;
}
