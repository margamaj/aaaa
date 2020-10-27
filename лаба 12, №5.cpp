#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout<<"Введите год: ";
    cin>>a;
    cout<<"год ";
    switch (a%10) {
        case 0: cout<<"бело"; break;
        case 1: cout<<"бело"; break;
        case 2: cout<<"черно"; break;
        case 3: cout<<"черно"; break;
        case 4: cout<<"зелено"; break;
        case 5: cout<<"зелено"; break;
        case 6: cout<<"красно"; break;
        case 7: cout<<"красно"; break;
        case 8: cout<<"желто"; break;
        case 9: cout<<"желто"; break;
    }
    switch ((a+8)%12) {
        case 0: cout<<"й крысы"; break;
        case 1: cout<<"й коровы"; break;
        case 2: cout<<"го тигра"; break;
        case 3: cout<<"го зайца"; break;
        case 4: cout<<"го дракона"; break;
        case 5: cout<<"й змеи"; break;
        case 6: cout<<"й лошади"; break;
        case 7: cout<<"й овцы"; break;
        case 8: cout<<"й обезьяны"; break;
        case 9: cout<<"й курицы"; break;
        case 10: cout<<"й собаки"; break;
        case 11: cout<<"й свиньи"; break;
    }
    return 0;
}
