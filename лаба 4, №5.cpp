#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Сумма модулей:"<<abs(a)+abs(b)<<endl;
    cout<<"Разность модулей:"<<abs(a)-abs(b)<<endl;
    cout<<"Произведение модулей:"<<abs(a)*abs(b)<<endl;
    cout<<"Частное модулей:"<<abs(a)/abs(b)<<endl;
    return 0;
}
