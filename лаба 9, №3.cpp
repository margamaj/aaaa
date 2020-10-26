#include <iostream>
using namespace std;
int main()
{
    int k, n, a;
    cout<<"Введите число k(1-365): ";
    cin>>k;
    cout<<"Введите число n(1-7): ";
    cin>>n;
    a = (k + n - 1) / 7;
    k = (k + n - 1) - a * 7;
    k=k+1;
    cout<<"День недели: ";
    if (k==1) cout<<"понедельник";
    if (k==2) cout<<"вторник";
    if (k==3) cout<<"среда";
    if (k==4) cout<<"четверг";
    if (k==5) cout<<"пятница";
    if (k==6) cout<<"суббота";
    if (k==7) cout<<"воскресенье";
    return 0;
}
