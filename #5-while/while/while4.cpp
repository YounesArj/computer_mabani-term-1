#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, output = 0;

    cout << "enter number:";
    cin >> n;

    while (n > 0)
    {
        output = output * 10;
        output += n % 10;
        n = n/10;
    }
    cout << output;

    //نمایش
    // cout<< "total:" <<  << '\n';
    //
    //پایان

    // getch();
    return 0;
}