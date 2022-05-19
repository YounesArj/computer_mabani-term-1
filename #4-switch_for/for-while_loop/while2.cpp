#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //تعریف متغیر
    int n;

    //ورودی ها
    cout << "enter number:";
    cin >> n;

    // cin >> n;

    //عملیات اصلی
    if (n > 0)
    {
        while (n > 1)
        {
            n = n - 1;
            cout << n << '\n';
        }
    } else {
        while (n < 1)
        {
            n = n + 1;
            cout << n << '\n';
        }
    }

    while (n > 1)
    {
        n = n - 1;
        cout << n << '\n';
    }

    //نمایش
    // cout<< "javab:" << output << '\n';

    //پایان

    // getch();
    return 0;
}