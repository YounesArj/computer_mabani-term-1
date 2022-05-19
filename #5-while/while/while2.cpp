#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, first, last;

    cout << "enter number:";
    cin >> n;

    first = n % 10;
    while (n > 0)
    {
        if (n / 10 == 0)
        {
            last = n;
        }
        n = n / 10;
    }

    if (first == last)
    {
        cout << first << " equal " << last;
    }
    else
    {
        cout << first << " not equal " << last;
    }

    //نمایش
    // cout<< "total:" <<  << '\n';

    //پایان

    // getch();
    return 0;
}