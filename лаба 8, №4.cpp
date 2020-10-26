#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Введите двузначное число а: ";
    cin>>a;
    b=a/10;
    a=a%10;
    cout<<"Число а с переставленными цифрами: "<<a<<b;
    return 0;
}
