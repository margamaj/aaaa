#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    const char* arr[4] {"север","запад","юг","восток"};
    cout<<"Введите начальное направление робота(1 - север, 2 - запад, 3 - юг, 4 - восток): ";
    cin>>a;
    cout<<"Введите число поворотов: ";
    cin>>b;
    c=(a+b)%4-1;
    cout<<"Конечное направление робота: "<<c<<arr[c];
    return 0;
}
