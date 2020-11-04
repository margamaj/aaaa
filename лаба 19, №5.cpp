#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout<<"Введите размер массива a: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива: ";
        cin>>a[i];
    }
    for (i = n - 1; i >= 0; i--) {
        if (a[i] > 0) {
            n = n + 1;
            for (j = n - 1; j > i; j--) {
                a[j] = a[j-1];
            }
            a[i] = 0;
        }
    }

    cout<<"Новый массив: ";
    for (i = 0; i < n; i++)
    cout<<a[i]<<" ";
    return 0;
}
