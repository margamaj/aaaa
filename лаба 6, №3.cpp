#include <iostream>
using namespace std;
int main()
{
    int a, b, c, x;
    cout<<"Введите переменную а: "<<endl;
    cin>>a;
    cout<<"Введите переменную b: "<<endl;
    cin>>b;
    cout<<"Введите переменную c: "<<endl;
    cin>>c;
    x=a;
    a=b;
    b=c;
    c=x;
    cout<<"Меняем переменные местами."<<endl;
    cout<<"Итог: переменная а = "<<a;
    cout<<", переменная b = "<<b;
    cout<<", переменная с = "<<c<<endl;
    return 0;
}
