#include <iostream>
using namespace std;
int main()
{
    int x, y, a;
    cout<<"Введите координату х: ";
    cin>>x;
    cout<<"Введите координату у: ";
    cin>>y;
    if (x > 0 && y > 0) cout<<1;
    if (x < 0 && y > 0) cout<<2;
    if (x < 0 && y < 0) cout<<3;
    if (x > 0 && y < 0) cout<<4;
    cout<<" четверть"<<endl;
    return 0;
}
