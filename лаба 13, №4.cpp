#include <iostream>
using namespace std;
int main() 
{ 
    int n, i;
    float a, b, c;
    cout<<"Введите число n: ";
    cin>>n;
    cout<<"Введите число a: ";
    cin>>a;
    b = a;
    c = 1;
    for (i = 1; i <= n; i = i + 1) {
        c = c + a;
        a = a * b;
    }
 cout<<"Сумма: "<<c;
    return 0;
}
