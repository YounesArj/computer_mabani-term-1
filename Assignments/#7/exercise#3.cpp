#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[10], search, check = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "enter array number " << i + 1 << " :";
        cin >> array[i];
    }
    cout << "enter search number:";
    cin >> search;

    for (int i = 0; i < 10; i++)
    {
        if (search == array[i])
        {
            check++;
            cout << "found!";
        }
    }
    if (check == 0)
    {
        cout << "not found!";
    }

    // getch();
    return 0;
}