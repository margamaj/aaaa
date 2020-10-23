#include <iostream>
using namespace std;
int main() {
int v1, v2, s, t;
cout<<"Введите v1(скорость 1): ";
cin>>v1;
cout<<"Введите v2(скорость 2): ";
cin>>v2;
cout<<"Введите s(расстояние мжду автомобилями): ";
cin>>s;
cout<<"Введите t(время): ";
cin>>t;
cout<<"Расстояние между автомобилями через "<<t<<" часов: "<<v1*t+v2*t+s;
return 0;
}
