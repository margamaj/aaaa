#include <iostream>
using namespace std;
int main()
{
    int n, i, k, temp, j;
    cout<<"Введите размер массива a: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива: ";
        cin>>a[i];
    }
    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            k = i;
            n = n + 1;
            for (j = n - 1; j > k; j--) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            a[i + 1] = 0;
        }
    }
    cout<<"Новый массив: ";
    for (i = 0; i < n; i++)
    cout<<a[i]<<" ";
    return 0;
}
