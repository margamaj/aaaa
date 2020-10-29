#include <iostream>
using namespace std;
int main()
{
    float r1, r2;
    float pi = 3.14;
    int i;
    for (i = 1; i < 4; i++) {
    cout<<"Введите внешний радиус: ";
    cin>>r1;
    cout<<"Введите внутренний радиус: ";
    cin>>r2;
    cout<<"Площадь "<<i<<" кольца: "<<pi * r1 * r1 - pi * r2 * r2<<endl;
    r1 = 0; r2 = 0;
    }
    return 0;
}
