#include <iostream>
using namespace std;
int main()
{
    int n, i, k;
    cout<<"Введите размер массива a: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива: ";
        cin>>a[i];
    }
    k = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0)
        k = a[i];
    }
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0)
        a[i] += k;
    }
        if (k == 0) cout<<"Нет нечетных чисел";
        else {
            cout<<"Новый массив: ";
            for (i = 0; i < n; i++)
            cout<<a[i]<<" ";
        }
}
