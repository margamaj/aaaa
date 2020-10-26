#include <iostream>
using namespace std;
int main()
{
    float a;
    cout<<"Введите размер файла в байтах: ";
    cin>>a;
    a=a/1024;
    cout<<"Размер файла в килобайтах: "<<a;
    return 0;
}
