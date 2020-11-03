#include <iostream>
using namespace std;
int main()
{
    int n, i, min, max, imax, imin;
    cout<<"Введите размер массива a: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива: ";
        cin>>a[i];
    }
    min = a[0];
    max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max) {
            max = a[i];
            imax = i;
        }
    for (i = 1; i < n; i++)
        if (a[i] < min) {
            min = a[i];
            imin = i;
        }
    for (i = imin+1; i < imax; i++)
        a[i] = 0;
        cout<<"Новый массив: ";
        for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
