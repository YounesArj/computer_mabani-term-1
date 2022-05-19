#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "enter number " << i + 1 << " :";
        cin >> array[i];
    }
    cout << "old array= ";
    for (int i = 0; i <= 6; i++)
    {
        cout << array[i] << " ";
    }
    for (int i = 0; i < 10; i++)
    {
        array[i] = array[i] * array[i] * array[i];
    }
    cout << "\n"
         << "new array= ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    // getch();
    return 0;
}