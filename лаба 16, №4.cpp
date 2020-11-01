#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout<<"Введите число n: ";
    cin>>n;
    int a[n];
    for (i = 1; i <= n; i++) {
        a[i]=i;
    }
    cout<<"Элементы в данном порядке: ";
    cout<<a[1]<<" "<<a[n]<<" "<<a[2]<<" ";
    cout<<a[n-1]<<" "<<a[3]<<" "<<a[n-2];
    return 0;
}
