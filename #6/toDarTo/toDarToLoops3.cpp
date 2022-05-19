#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    for (int i = 10; i <= 99; i++)
    {

        if (i % 2 == 0)
        {
            long double factorial = 1.0;
            for (int j = 1; j <= i; j++)
            {
                factorial *= j;
            }
            cout << i << " = " << factorial << "\n";
        }
    }

    // getch();
    return 0;
}