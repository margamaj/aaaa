#include <iostream>
using namespace std;
int main()
{
    int a, i, n, b;
    cout<<"Введите число n: ";
    cin>>n;
    cout<<"Введите первый член прогрессии а: ";
    cin>>a;
    cout<<"Введите второй член прогрессии b: ";
    cin>>b;
    int arr[n];
    arr[0]=a;
    arr[1]=b;
    for (i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout<<"Массив с размером "<<n<<": ";
    for (i = 0; i < n; i++) cout<<arr[i]<<" ";
    return 0;
}
