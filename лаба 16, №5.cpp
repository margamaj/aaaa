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
    for (i = 1; i <= n; i = i + 2) {
        cout<<a[i]<<" ";
    }
    for (i = n; i > 0; i--) {
        if (i % 2 == 0)
        cout<<a[i]<<" ";
    }
    return 0;
}
