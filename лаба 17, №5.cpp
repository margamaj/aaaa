#include <iostream>
using namespace std;
int main()
{
    int n, i, j, i1, j1;
    cout<<"Введите размер массива: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Введите значение "<<i + 1<<" элемента массива: ";
        cin>>a[i];
    }
    for (i = 0; i < n-1; i++)
        for (j = 1; j < n; j++)
            if (a[i] == a[j] && i != j) {
                i1 = i+1;
                j1 = j+1;
            }
    cout<<"Номера одинаковых элементов: "<<i1<<" и "<<j1;
    return 0;
}
