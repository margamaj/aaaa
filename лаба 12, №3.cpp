#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    const char* arr[9] {"один", "две", "три", "четыр", "пят", "шест", "сем", "восем", "девят"};;
    const char* arr1[9] {"одно", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    cout<<"Введите число от 1 до 40: ";
    cin>>a;
    c=a/10;
    if (c==1) {
        d=a%10;
        cout<<arr[d-1];
        cout<<"надцать учебных заданий";
    }
    if (c>1) {
        if (c==2)
        cout<<"двадцать ";
        else if (c==3)
        cout<<"тридцать ";
        else if (c==4)
        cout<<"сорок ";
        d=a%10;
        if (d==0) cout<<"учебных заданий";
        else if (d > 0) {
            cout<<arr1[d-1]<<" ";
            if (d==1) cout<<"учебное задание";
        else if (d <= 4) cout<<"учебных задания";
        else if (d > 4 && d < 10) cout<<"учебных заданий";
        }
    }
    return 0;
}
