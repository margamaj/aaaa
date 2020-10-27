#include <iostream>
using namespace std;
int main()
{
    float n;
    float a=1.1;
    int x;
    cout<<"Введите n (n > 0): ";
    cin>>n;
    for (x = 1; x < n; x++)
    a=a*(1.1+(float)x/10); 
    cout<<"Произведение: "<<a;
    return 0;
}
