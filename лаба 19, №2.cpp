#include <iostream>
using namespace std;
int main()
{
    int n, i, j, chet, k;
    cout<<"Введите размер массива: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Значение "<<i + 1<<" элемента массива a: ";
        cin>>a[i];
    }
    chet = 0;
    for (j = 0; j < n - 1; j++) {
        for (i = j + 1; i < n - 1; i++) {
            if (i != j && a[j] == a[i])
                chet += 1;
                k = j;
        }
            if (chet == 1) {
                while (k < n - 2) {
                    a[k] = a[k + 2];
                    k++;
                }
            n = n - 2;
            }
        chet = 0;
    }
    cout<<"Новый массив: ";
    for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Размер массива: "<<n;
    return 0;
}
