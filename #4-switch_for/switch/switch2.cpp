#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //تعریف متغیر
    char n;

    //ورودی ها
    cout << "enter season number: ";
    cin >> n;

    //عملیات اصلی
    switch (n)
    {
    case '1':
        cout << "it's spring!";
        break;
    case '2':
        cout << "it's summer!";
        break;
    case '3':
        cout << "it's fall!";
        break;
    case '4':
        cout << "it's winter!";
        break;
    default:
        cout << "invalid season index!";
        break;
    }

    //نمایش
    // cout<< "javab:" << output << '\n';

    //پایان

    // getch();
    return 0;
}