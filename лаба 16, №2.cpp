#include <iostream>
using namespace std;
int main()
{
    int a, i, n, d;
    cout<<"Введите число n: ";
    cin>>n;
    cout<<"Введите первый член прогрессии а: ";
    cin>>a;
    cout<<"Введите знаменатель прогрессии d: ";
    cin>>d;
    int arr[n];
    for (i = 0; i < n; i++) {
        arr[i] = a;
        a = a * d;
    }
    cout<<"Массив с размером "<<n<<": ";
    for (i = 0; i < n; i++) cout<<arr[i]<<" ";
    return 0;
}
