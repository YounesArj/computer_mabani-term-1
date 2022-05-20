#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
void divisior(int x);

int main()
{
    int input;
    cout << "enter a value:";
    cin >> input;
    divisior(input);

    //_getch();
    return 0;
}

void divisior(int x)
{
    cout << x << " ";
    for (int i = x/2; i > 0; i--)
    {
        if (x % i == 0)
        {
            cout << i << " ";
        }
    }
}