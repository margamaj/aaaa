#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum;
    cout<<"Введите а: ";
    cin>>a;
    cout<<"Введите b: ";
    cin>>b;
    cout<<"Введите c: ";
    cin>>c;
    sum=a+b;
    if (a+c>sum)
    sum=a+c;
    if (b+c>sum)
    sum=b+c;
    cout<<"Наибольшая сумма: "<<sum<<endl;
    return 0;
}
