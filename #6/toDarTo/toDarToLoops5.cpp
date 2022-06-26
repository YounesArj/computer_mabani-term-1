#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;
    cout << "enter number:";
    cin >> a;

    for (int i = 0; i < a; i++) // 3 times
    {
        for (int j = 0; j < a - i - 1; j++) // 3 - 2 - 1 = 0
        {
            cout << " " << '\t';
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << '\t';
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*" << '\t';
        }
        cout << endl;
    }

    for (int i = 0; i < a - 1; i++) // 3 times
    {
        for (int j = 0; j < i + 1; j++) // 3 - 2 - 1 = 0
        {
            cout << " " << '\t';
        }

        for (int j = 0; j < a - 1 - i; j++)
        {
            cout << "*" << '\t';
        }

        for (int j = 0; j < a - 2 - i; j++)
        {
            cout << "*" << '\t';
        }
        cout << endl;
    }

    // getch();
    return 0;
}