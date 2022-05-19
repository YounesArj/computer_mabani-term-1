#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //تعریف متغیر
    int n, out, power = 1;

    //ورودی ها
    cout << "enter number:";
    cin >> n;

    // cin >> n;

    //عملیات اصلی
    while (n > 0)
    {
        
        out = n % 10;
        n = n / 10;

        cout<< "total:" << out * power << '\n';

        power = power * 10;
    }
    

    //نمایش
    //cout<< "total:" <<  << '\n';

    //پایان

    // getch();
    return 0;
}