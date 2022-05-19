#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[11], temp, j = 10;
    for (int i = 0; i < 11; i++)
    {
        cout << "enter array number " << i + 1 << " :";
        cin >> array[i];
    }

    for (int i = 0; i < 11 / 2; i++)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        j--;
    }

    cout << "reversed array: ";
    for (int i = 0; i < 11; i++)
    {
        cout << array[i] << " ";
    }
    // getch();
    return 0;
}