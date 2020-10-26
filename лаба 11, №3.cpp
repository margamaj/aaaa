#include <iostream>
using namespace std;
int main()
{
    int a, b, c, ab, ac;
    cout<<"Введите а: ";
    cin>>a;
    cout<<"Введите b: ";
    cin>>b;
    cout<<"Введите c: ";
    cin>>c;
    ab=abs(a-b);
    ac=abs(a-c);
    if (ab==ac)
    cout<<"Точки равноудалены от точки а";
    else if (ac<ab)
    cout<<"Точка с расположена ближе к точке а. Расстояние: "<<ac<<endl;
    else
    cout<<"Точка b расположена ближе к точке а. Расстояние: "<<ab<<endl;
    return 0;
}
