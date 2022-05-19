#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[10], temp;
    for (int i = 0; i < 10; i++)
    {
        cout << "enter array number " << i + 1 << " :";
        cin >> array[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "sorted array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    // getch();
    return 0;
}