#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;

    cout << "enter number:";
    cin >> n;

    while (n > 4 && n < 101 && n % 2 != 0)
    {
        cout << n << " has the conditions"
             << "\n";
        cout << "enter number:";
        cin >> n;
    }

    //نمایش
    // cout<< "total:" <<  << '\n';
    //
    //پایان

    // getch();
    return 0;
}