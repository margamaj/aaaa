#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout<<"Введите число n: ";
    cin>>n;
    int arr[n];
    for (i = 1; i <= n; i++) {
        arr[i]=i;
    }
    cout<<"Элементы в данном порядке: ";
    cout<<arr[1]<<" "<<arr[n]<<" "<<arr[2]<<" ";
    cout<<arr[n-1]<<" "<<arr[3]<<" "<<arr[n-2];
    return 0;
}
