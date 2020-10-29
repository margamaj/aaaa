#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b;
    int i;
    for (i = 1; i < 6; i++) {
        cout<<"Введите "<<i<<" число а: ";
        cin>>a;
        b = pow(a, 3);
        cout<<"Число "<<a<<" в 3 степени: "<<b<<endl;
        a = 0;
    }
    return 0;
}
