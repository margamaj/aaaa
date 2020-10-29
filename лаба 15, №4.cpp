#include <iostream>
using namespace std;
int main()
{
    float x, y;
    int i;
    for (i = 1; i < 4; i++) {
    cout<<"Введите координату х: ";
    cin>>x;
    cout<<"Введите координату y: ";
    cin>>y;
    if (x > 0 && y > 0) cout<<1;
    if (x < 0 && y > 0) cout<<2;
    if (x < 0 && y < 0) cout<<3;
    if (x > 0 && y < 0) cout<<4;
    cout<<" четверть"<<endl;
    x = 0; y = 0;
    }
    return 0;
}
