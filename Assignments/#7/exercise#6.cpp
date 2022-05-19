#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int aArray[10], bArray[10], cArray[10], temp, counter = 0;

    cout << "enter A grades: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> aArray[i];
    }

    cout << "enter B grades: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> bArray[i];
    }

    cout << "enter C grades: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> cArray[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (aArray[i] > aArray[j])
            {
                temp = aArray[i];
                aArray[i] = aArray[j];
                aArray[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (aArray[i] < 12)
        {
            counter++;
        }
    }
    cout << "A total under 12 grades: " << counter << "\n";
    counter = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (bArray[i] > bArray[j])
            {
                temp = aArray[i];
                bArray[i] = bArray[j];
                bArray[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (bArray[i] < 12)
        {
            counter++;
        }
    }
    cout << "B total under 12 grades: " << counter << "\n";
    counter = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (cArray[i] > cArray[j])
            {
                temp = cArray[i];
                cArray[i] = cArray[j];
                cArray[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (cArray[i] < 12)
        {
            counter++;
        }
    }
    cout << "C total under 12 grades: " << counter << "\n";
    counter = 0;

    // getch();
    return 0;
}