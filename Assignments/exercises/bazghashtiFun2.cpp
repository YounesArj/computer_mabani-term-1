#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int fac(int g)
{
    if (g == 0)
    {
        return 1;
    }

    return g * fac(g - 1);
}

int main()
{
    int a;
    cout << "enter fac num:";
    cin >> a;

    cout << fac(a);

    // getch();
    return 0;
}
