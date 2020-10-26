#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Введите число: ";
    cin>>a;
    if (a==0)
    cout<<"нулевое число";
    else if (a>0) cout<<"положительное";
    else cout<<"отрицательное";
    if (a!=0) {
    if (a % 2 == 0) cout<<" четное";
    else cout<<" нечетное";
    cout<<" число"<<endl;
    }
    return 0;
}
