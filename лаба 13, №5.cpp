#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float a, b, sum;
    cout<<"Введите число n: ";
    cin>>n;
    cout<<"Введите число a: ";
    cin>>a;
    b = 1; sum = 1;
    for (i = 1; i <= n; i++) {
        b=-b*a;
        sum=sum+b;
    }
    cout<<"Сумма: "<<sum;
    return 0;
}
