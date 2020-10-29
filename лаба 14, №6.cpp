#include <iostream>
using namespace std;
int main()
{
    int n, k, fib1, fib2;
    cout<<"Введите число n: ";
    cin>>n;
    fib1 = 1;
    fib2 = 1;
    k = 2;
    while (n > fib2) {
     fib2 = fib1 + fib2;
     fib1 = fib2 - fib1;
     k = k + 1;
    }
  if (n==fib2)
    cout<<"Порядковый номер числа "<<n<<": "<<k;
  else 
    cout<<n<<" не является числом фибоначчи";
  return 0;
}
