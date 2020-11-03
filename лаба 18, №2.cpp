#include <iostream>
using namespace std;
int main()
{
    int n, i, sum;
    cout<<"Введите размер массива a: ";
    cin>>n;
    int a[n];
    float b[n];
    for (i = 1; i <= n; i++) {
        cout<<"Значение "<<i<<" элемента массива: ";
        cin>>a[i];
    }
    sum = 0;
    for (i = 1; i <= n; i++) {
            sum = sum + a[i];
            b[i] = (float)(sum) / (float)(i);
        }
        cout<<"Новый массив: ";
        for (i = 1; i <= n; i++)
        cout<<b[i]<<" ";
}
