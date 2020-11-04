#include <iostream>
using namespace std;
int main()
{
    int n, k, i;
    cout<<"Введите размер массива: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива a: ";
        cin>>a[i];
    }
    k = 0;
    for (i = 1; i < n; i++) {
        if (a[k] != a[i]) {
                k++;
                a[k] = a[i];
        }
    }
    k++;
    cout<<"Новый массив: ";
    for (i = 0; i < k; i++)
        cout<<a[i]<<" ";
    return 0;
}
