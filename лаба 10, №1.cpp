#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Справедливы неравенства (a > 2) и (b <= 3)"<<endl;
    cout<<"Введите a: ";
    cin>>a;
    cout<<"Введите b: ";
    cin>>b;
    if (a > 2 && b <= 3)
    cout<<"Высказывание истинно";
    else cout<<"Высказывание ложно";
    return 0;
}
