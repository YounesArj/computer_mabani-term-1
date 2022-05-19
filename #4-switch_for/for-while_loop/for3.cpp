#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //تعریف متغیر
    int n, total = 0;

    //ورودی ها
    cout << "enter number:";
    cin >> n;

    // cin >> n;

    //عملیات اصلی
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }

    //نمایش
    cout<< "total:" << total << '\n';

    //پایان

    // getch();
    return 0;
}