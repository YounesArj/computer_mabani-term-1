#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    int a[10] = {34, 2, 1, 34, -5, 4, -30, 100, 15, 31};
    // a = {34,5,1,34,-5,4,-30,100,15,31};

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    // getch();
    return 0;
}