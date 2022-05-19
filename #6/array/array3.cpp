#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[7];
    int firstInt, secondInt, dummy;
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
    dummy = array[1];
    array[1] = array[3];
    array[3] = dummy;

    cout << "\n" << "array= ";
    for (int i = 0; i <= 6; i++)
    {
        cout << array[i] << " ";
    }

    // getch();
    return 0;
}