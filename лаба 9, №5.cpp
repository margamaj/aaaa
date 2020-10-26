#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Введите год: ";
    cin>>a;
    if (a%100==0)
    b=a/100;
    else b=a/100+1;
    cout<<"Столетие этого года: "<<b;
    return 0;
}
