#include <iostream>
using namespace std;
int main()
{
    int n, i, min;
    cout<<"Введите размер массива: ";
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++) {
        cout<<"Введите значение "<<i + 1<<" элемента массива: ";
        cin>>a[i];
    }
    min = a[1];
    for (i = 3; i < n; i = i + 2) {
    if (a[i] < min)
        min = a[i];
    }
    cout<<"Минимальное значение четного элемента: "<<min;
    return 0;
}
