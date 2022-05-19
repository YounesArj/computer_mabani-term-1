#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //تعریف متغیر
    int totalFailed = 0;
    float grade;
    char name;

    for (int i = 1; i <= 5; i++)
    {
        cout << "enter name:";
        cin >> name;
        cout << "grade:";
        cin >> grade;

        if (grade < 12)
        {
            cout << name << " failed!" << '\n';
            totalFailed++;
        }
    }
    cout << "total failed:" << totalFailed << '\n';
    return 0;
}