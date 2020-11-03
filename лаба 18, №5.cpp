#include <iostream>
using namespace std;
int main()
{
    int n, i, x, k;
    cout<<"Введите размер массива a: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива: ";
        cin>>a[i];
    }
    for (i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            x = a[i];
            a[i] = a[i + 1];
            a[i + 1] = x;
        }
    }
        cout<<"Отсортируем массив"<<endl<<"Новый массив: ";
        for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
