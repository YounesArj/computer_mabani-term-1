#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    for (int i = 10; i <= 99; i++)
    {
        if (i % 2 != 0)
        {
            int output = 0, number = i, num = i;
            while (num != 0)
            {
                output += (num % 10);
                num /= 10;
            }
            cout << number << "=" << output << "\n";
        }
    }

    // getch();
    return 0;
}