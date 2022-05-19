#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;

    for (int i = 0; i < 10; i++)
    {
        int output = 0;
        
        cout << "enter number:";
        cin >> n;

        while (n > 0)
        {
            output = output * 10;
            output += n % 10;
            n = n / 10;
        }
        cout << output << "\n";
    }

    cout << "END!";

    // getch();
    return 0;
}