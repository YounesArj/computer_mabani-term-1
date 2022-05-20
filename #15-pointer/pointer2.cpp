#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    int *p, x[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }

    p = &x[0];
    for (int i = 0; i < 4; i++)
    {
        cout << *(p + i);
    }

    //_getch();
    return 0;
}