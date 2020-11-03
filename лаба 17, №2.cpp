#include <iostream>
using namespace std;
int main()
{
    int i, n, n1, k;
    cout<<"Введите размер массива n: ";
    cin>>n;
    n1 = n - 1;
    int arr[n], arr1[n1];
    for (i = 0; i < n; i++) {
        cout<<"Введите значение "<<i + 1<<" элемента массива: ";
        cin>>arr[i];
    }
    for (i = 0; i < n - 1; i++) {
        arr1[i] = arr[i + 1] - arr[i];
    }
    i = 0;
    k = arr1[i];
    while (k == arr1[i + 1] && i < n1-1) {
      i++;
    }
    k = arr1[i];
    if (i == n1 - 1  && k == arr1[i-1])
      cout<<"Разность прогрессии: "<<arr1[i];
      else cout<<"Не является прогрессией";
    return 0;
}
