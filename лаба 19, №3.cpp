#include <iostream>
using namespace std;
int main()
{
    int n, i, j, temp, max, min, imax, imin;
    cout<<"Введите размер массива a: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива: ";
        cin>>a[i];
    }
    max = a[0]; min = a[0]; imin = 0; imax = 0;
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            imax = i;
        }
        if (a[i] < min) {
            min = a[i];
            imin = i;
        }
    }
    n = n + 1;
    for (i = n; i > imax+1; i--) {
        a[i] = a[i - 1];
    }
    a[imax + 1] = 0;
    n = n + 1;
    if (imin==0) {
        for (i = n; i > imin; i--) {
            a[i] = a[i - 1];
        }
        a[imin] = 0;
    }
    else if (imin>0) {
        for (i = n; i > imin+1; i--) {
            a[i] = a[i - 1];
        }
        a[imin+1] = 0;
    }
        cout<<"Новый массив: ";
        for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
        return 0;
}
