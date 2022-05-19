#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[10], first;
    for (int i = 0; i < 10; i++)
    {
        cout << "enter number " << i + 1 << " :";
        cin >> array[i];
    }

    first = array[0];

    for (int i = 1; i < 10; i++)
    {
        if (first < array[i])
        {
            first = array[i];
        }
    }
    cout << "greatest number: " << first;
    //getch();
    return 0;
}