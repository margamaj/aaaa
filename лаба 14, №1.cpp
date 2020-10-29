#include <iostream>
using namespace std;
int main()
{
    int a, b, i, j;
    cout<<"Введите а: ";
    cin>>a;
    cout<<"Введите b: ";
    cin>>b;
    for (i = a; i <= b; i++) {
        for (j = 1; j <= i; j++) {
            cout<<i<<endl;
        }
    }
    return 0;
}
