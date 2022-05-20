#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int sum(int a, int b);

int main()
{
    int x, y;
    cout << "enter two values:";
    cin >> x >> y;
    cout << "sum:" << sum(x, y);

    //_getch();
    return 0;
}

int sum(int a, int b)
{
    int temp = a + b;
    return temp;
}