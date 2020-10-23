#include <iostream>
using namespace std;
int main() {
float p = 3.14;
float a, r;
cout<<"Введите значение угла а: "<<endl;
cin>>a;
r = p * (a / 180);
cout<<"Значение угла в радианах: "<<r<<endl;
return 0;
}
