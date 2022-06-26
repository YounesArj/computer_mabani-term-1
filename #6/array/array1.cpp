#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[10];
    for (int i = 0; i <= 9; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i <= 9; i++)
    {
        cout << array[i];
    }
    cout << "\n"
         << array;

    // getch();
    return 0;
}