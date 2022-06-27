#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    int *p, x = 10;
    p = &x;
    
    *p = 25;
    cout << *p << "\n";
    cout << x;
    //_getch();
    return 0;
}