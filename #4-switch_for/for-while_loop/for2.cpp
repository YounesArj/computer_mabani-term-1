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
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << '\n';
        }
    }

    //نمایش
    // cout<< "javab:" << output << '\n';

    //پایان

    // getch();
    return 0;
}