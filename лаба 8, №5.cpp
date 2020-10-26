#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Введите трехзначное число а: ";
    cin>>a;
    b=a/100;
    a=a%100;
    cout<<"Число а с первой цифрой в конце: "<<a<<b;
    return 0;
}
