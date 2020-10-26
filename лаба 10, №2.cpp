#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Справедливо тройное неравенство (a < b < c)"<<endl;
    cout<<"Введите a: ";
    cin>>a;
    cout<<"Введите b: ";
    cin>>b;
    cout<<"Введите c: ";
    cin>>c;
    if (a < b && b < c)
    cout<<"Высказывание истинно";
    else cout<<"Высказывание ложно";
    return 0;
}
