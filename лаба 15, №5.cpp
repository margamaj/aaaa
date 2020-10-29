#include <iostream>
using namespace std;
int main()
{
    float n;
    float s = 1;
    int i;
    cout<<"Введите число n: ";
    cin>>n;
    for (i = n; i >= 1; i = i - 2) {
        s=s*i;
    }
    cout<<"Двойной факториал числа: "<<s;
    return 0;
}
