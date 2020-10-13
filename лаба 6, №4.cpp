#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Функция: y=3*x^6-6*x^2-7"<<endl;
    cout<<"Введите аргумент функции: ";
    cin>>x;
    y=3*x*x*x*x*x*x-6*x*x-7;
    cout<<"Функция равна: "<<y;
    return 0;
}
