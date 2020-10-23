#include <iostream>
using namespace std;
int main() {
int a1, a2, b1, b2, c1, c2, x1, y1, z;
float x, y;
cout<<"Введите a1: ";
cin>>a1;
cout<<"Введите a2: ";
cin>>a2;
cout<<"Введите b1: ";
cin>>b1;
cout<<"Введите b2: ";
cin>>b2;
cout<<"Введите c1: ";
cin>>c1;
cout<<"Введите c2: ";
cin>>c2;
    z = a1*b2 - b1*a2;
    x1 = c1*b2 - b1*c2;
    y1 = a1*c2 - c1*a2;
    x = x1/z;
    y = y1/z;
cout<<"Значение х = "<<x<<", значение y = "<<y;
return 0;
}
