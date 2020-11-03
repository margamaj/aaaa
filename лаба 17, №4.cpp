#include <iostream>
using namespace std;
int main()
{
    int n, i, max, i1;
    cout<<"Введите размер массива: ";
    cin>>n;
    int a[n];
    for (i = 1; i <= n; i++) {
        cout<<"Введите значение "<<i<<" элемента массива: ";
        cin>>a[i];
    }
    max = a[2];
    i1 = 2;
    for (i = 3; i < n; i++) {
        if ( a[i] > a[i - 1] &&  a[i] > a[i + 1]) {
            max = a[i];
            i1 = i;
        }
    }
    if ( i1 > 2) cout<<"Номер последнего локального максимума: "<<i1;
    else if (a[2] > a[1] && a[2] > a[3]) cout<<"Номер последнего локального максимума: "<<i1;
    else cout<<"Нет максимума";
    return 0;
}
