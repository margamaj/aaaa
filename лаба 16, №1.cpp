#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout<<"Введите число n: ";
    cin>>n;
    int arr[n];
    j = 1;
    for (i = 1; i <= n; i++) {
        arr[i]=j;
        j = j + 2;
    }
    cout<<"Массив с размером "<<n<<": ";
    for (i = 1; i <= n; i++) cout<<arr[i]<<" ";
    return 0;
}
