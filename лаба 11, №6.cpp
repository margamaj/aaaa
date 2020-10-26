#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Введите число: ";
    cin>>a;
    if (a<10) cout<<"однозначное";
    else if (a>9 && a<100) cout<<"двухзначное";
    else  cout<<"трехзначное";
    if (a % 2 == 0) cout<<" четное";
    else cout<<" нечетное";
    cout<<" число"<<endl;
    return 0;
}
