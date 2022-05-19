#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //تعریف متغیر
    int side1, side2, side3, height;

    //ورودی ها
    cout << "enter side #1: ";
    cin >> side1;
    cout << "enter side #2: ";
    cin >> side2;
    cout << "enter side #3: ";
    cin >> side3;
    //cout << "enter height: ";
    //cin >> height;

    //عملیات اصلی

    //بررسی صحت مثلث بودن یا نبودن
    if (side1 + side2 > side3)
    {
        if (side3 + side1 > side2)
        {
            if (side2 + side3 > side1)
            {
                //بررسی نوع مثلث
                if (side1 == side2)
                {
                    if (side2 == side3)
                    {
                        cout << "triangle is motavazi ol azla";
                    }
                    else
                    {
                        cout << "triangle is motasavi ol saghain";
                    }
                }
                else
                {
                    if (side2 == side3)
                    {
                        cout << "triangle is motasavi ol saghain";
                    }
                    else
                    {
                        if (side1 == side3)
                        {
                            cout << "triangle is motasavi ol saghain";
                        }
                        else
                        {
                            cout << "triangle is mokhtalef ol azla";
                        }
                    }
                }
            }
            else
            {
                cout << "invalid triangle parameters!";
            }
        }
        else
        {
            cout << "invalid triangle parameters!";
        }
    }
    else
    {
        cout << "invalid triangle parameters!";
    }

    //نمایش
    // cout<< "javab:" << output << '\n';

    //پایان

    // getch();
    return 0;
}