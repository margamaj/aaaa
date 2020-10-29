#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Введите а: ";
    cin>>a;
    cout<<"Введите b: ";
    cin>>b;
    while (a > b) {
        a = a - b;
    }
    cout<<"Незанятая часть а: "<<a;
    return 0;
}
