#include <iostream>
using namespace std;
int main()
{
    int i, k, l, n;
    float s;
    cout<<"Введите размер массива: ";
    cin>>n;
    int arr[n];
    cout<<"Введите число k: ";
    cin>>k;
    cout<<"Введите число l: ";
    cin>>l;
    s = 0;
    for (i = 1; i <= n; i++) {
        arr[i]=i;
    }
    for (i = k; i <= l; i++) {
        s = s + arr[i];
    }
    s = s / (l - k + 1);
    cout<<"Среднее арифметическое: "<<s;
    return 0;
}
