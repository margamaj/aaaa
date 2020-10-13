#include <iostream>
using namespace std;
int main()
{
    int a, x; //x - вспомогательная переменная
    cout<<"Введите а"<<endl;
    cin>>a;
    x=a*a; //1 операция
    a=x*x; //2 операция
    x=a*a; //3 операция
    cout<<"a в 8 степени равно: "<<x<<endl;
    return 0;
}
