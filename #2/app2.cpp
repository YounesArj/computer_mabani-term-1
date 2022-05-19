#include <iostream>
#include <conio.h>
using namespace std;
int main() 
{
    //تعریف متغیر
    float a, all;


    //ورودی ها
    cout<< "enter number: ";
    cin>>a;
    
    //عملیات اصلی
    all = ((a*a*a) / ((a*a) + a -1));

    //نمایش
    cout<< "javab:" << all << '\n';

    //پایان

    //getch();
    return 0;
}