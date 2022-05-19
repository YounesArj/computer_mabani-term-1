#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[7];
    int firstInt, secondInt;
    cout << "enter array values:";
    for (int i = 0; i <= 6; i++)
    {
        cin >> array[i];
    }
    cout << "array= ";
    for (int i = 0; i <= 6; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n"
         << "enter first number:";
    cin >> firstInt;

    cout << "enter second number:";
    cin >> secondInt;

    array[1] = firstInt;
    array[3] = secondInt;

    cout << "array= ";
    for (int i = 0; i <= 6; i++)
    {
        cout << array[i] << " ";
    }

    // getch();
    return 0;
}