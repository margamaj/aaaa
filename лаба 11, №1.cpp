#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Введите а: ";
    cin>>a;
    cout<<"Введите b: ";
    cin>>b;
    if (a==b) {
    a=0;
    b=0;
    cout<<"Переменные равны"<<endl;
    cout<<"Новое значение а: "<<a<<endl;
    cout<<"Новое значение b: "<<b<<endl;
    }
    else if (a>b) {
    b=a;
    cout<<"Переменная а больше переменной b"<<endl;
    cout<<"Новое значение а: "<<a<<endl;
    cout<<"Новое значение b: "<<b<<endl;
    }
    else {
        a=b;
        cout<<"Переменная b больше переменной a"<<endl;
        cout<<"Новое значение а: "<<a<<endl;
        cout<<"Новое значение b: "<<b<<endl;
    }
    return 0;
}
