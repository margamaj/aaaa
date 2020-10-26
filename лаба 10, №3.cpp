#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Данное число является четным двузначным"<<endl;
    cout<<"Введите a: ";
    cin>>a;
    
    if (a > 9 && a < 100 && a % 2 == 0)
    cout<<"Высказывание истинно";
    else cout<<"Высказывание ложно";
    return 0;
}
