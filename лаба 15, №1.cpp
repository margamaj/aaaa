#include <iostream>
using namespace std;
int main()
{
    float a, b;
    int i;
    for (i = 1; i < 6; i++) {
        cout<<"Введите "<<i<<" число а: ";
        cin>>a;
        b = a*a*a;
        cout<<"Число "<<a<<" в 3 степени: "<<b<<endl;
        a = 0;
    }
    return 0;
}
