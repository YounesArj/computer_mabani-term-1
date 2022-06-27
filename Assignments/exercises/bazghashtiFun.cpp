#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int fibo(int g){
    if(g < 2){
        return g;
    }

    return fibo(g-2) + fibo(g-1);
}

int main()
{
    int a;
    cout << "enter fibo num:";
    cin >> a;

    cout << fibo(a);

    // getch();
    return 0;
}