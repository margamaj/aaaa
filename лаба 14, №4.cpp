#include <iostream>
using namespace std;
int main()
{
    int p, s, k;
    cout<<"Введите процент p (0 - 25): ";
    cin>>p;
    k = 0;
    s = 1000;
    while (s<=1100) {
        k = k + 1;
        s = s + s / 100 * p;
        cout<<s<<endl;
    }
    cout<<"Количество месяцев: "<<k<<endl;
    cout<<"Размер вклада: "<<s;
    return 0;
}
