#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Введите размер массива: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива a: ";
        cin>>a[i];
    }
    for (i = 0; i < n - 1; i++)
        if (a[i] == a[i + 1]) 
            a[i + 1]=0;
    cout<<"Новый массив: ";
    for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
    return 0;
}
