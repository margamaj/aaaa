#include <iostream>
using namespace std;
int main()
{
    int sum, k, n;
    cout<<"Введите n: ";
    cin>>n;
    k = 1;
    sum = 1;
    while ((sum + k) < n) {
        k = k + 1;
        sum = sum + k;
    }
    cout<<"Минимальное число k: "<<k<<endl;
    cout<<"Сумма: "<<sum;
    return 0;
}
