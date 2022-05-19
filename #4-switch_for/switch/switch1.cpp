#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //تعریف متغیر
    char n;
    int number1, number2;

    //ورودی ها
    cout << "firts number: ";
    cin >> number1;
    cout << "operation: ";
    cin >> n;
    cout << "second number: ";
    cin >> number2;

    //عملیات اصلی
    switch (n)
    {
    case '-':
        cout << number1 - number2;
        break;
    case '+':
        cout << number1 + number2;
        break;
    case '*':
        cout << number1 * number2;
        break;
    case '/':
        cout << number1 / number2;
        break;
    default:
        cout << "no valid operation entered!";
        break;
    }

    //نمایش
    // cout<< "javab:" << output << '\n';

    //پایان

    // getch();
    return 0;
}