#include <iostream>
#include <array>
using namespace std;
int main()
{
    int k, a;
    cout<<"Введите число k(1-365): ";
    cin>>k;
    a = k / 7;
    k = k - a * 7;
    cout<<"День недели: ";
    if (k==0) cout<<"воскресенье";
    if (k==1) cout<<"понедельник";
    if (k==2) cout<<"вторник";
    if (k==3) cout<<"среда";
    if (k==4) cout<<"четверг";
    if (k==5) cout<<"пятница";
    if (k==6) cout<<"суббота";
    return 0;
}
