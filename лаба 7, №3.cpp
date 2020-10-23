#include <iostream>
using namespace std;
int main() {
int x, y, a;
cout<<"Введите х(кг конфет): ";
cin>>x;
cout<<"Введите a(рублей за "<<x<<" кг конфет): ";
cin>>a;
cout<<"Введите y(кг конфет): ";
cin>>y;
cout<<"Цена за 1 кг: "<<a/x<<" рублей"<<endl;
cout<<"Цена за "<<y<<" кг конфет: "<<a/x*y<<" рублей";
return 0;
}
