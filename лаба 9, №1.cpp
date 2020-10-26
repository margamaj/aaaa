#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cout<<"Введите число секунд n: ";
    cin>>n;
    a = n/60;
    n = n - a * 60;
    cout<<"Секунд с начала последней минуты: "<<n;
    return 0;
}
