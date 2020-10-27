#include <iostream>
using namespace std;
int main() 
{ 
    int n, i;
    float a = 1;
    cout<<"Введите число n: ";
    cin>>n;
    for (i = 3; i <= (2*n - 1); i = i + 2) {
        a = a + i;
        cout<<"Пошаговая сумма: "<<a<<endl;
    }
 cout<<"Квадрат числа: "<<a;
    return 0;
}
