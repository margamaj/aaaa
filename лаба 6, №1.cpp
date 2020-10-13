#include <iostream>
using namespace std;
int main()
{
    int a, b, x;
    cout<<"Введите переменную а: "<<endl;
    cin>>a;
    cout<<"Введите переменную b: "<<endl;
    cin>>b;
    x=a;
    a=b;
    b=x;
    cout<<"Меняем переменные местами."<<endl;
    cout<<"Итог: переменная а = "<<a<<", переменная b = "<<b<<endl;
    return 0;
}
