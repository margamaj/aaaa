#include <iostream>
using namespace std;
int main()
{
    int n, i, x;
    cout<<"Введите размер массивов a и b: ";
    cin>>n;
    int a[n], b[n];
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива a: ";
        cin>>a[i];
    }
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива b: ";
        cin>>b[i];
    }
    for (i = 0; i < n; i++) {
        x = a[i];
        a[i] = b[i];
        b[i] = x;
    }
    cout<<"Поменяем массивы местами"<<endl;
    cout<<"Новый массив a: ";
    for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Новый массив b: ";
    for (i = 0; i < n; i++)
        cout<<b[i]<<" ";
    return 0;
}
