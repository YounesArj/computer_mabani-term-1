#include <iostream>
#include <conio.h>
using namespace std;
int main() 
{
    //تعریف متغیر
    int number;
    float output;


    //ورودی ها
    cout<< "enter number: ";
    cin>>number;
    
    //عملیات اصلی
    if (number % 2 == 0){
        //even (زوج)
        //output = (number*number + 10)/(10*number*number - 3*number);
        output = 20/34;
        cout<< "zooj:" << output << '\n';
    } else {
        //odd (فرد)
        output = number*number;
        cout<< "fard:" << output << '\n';
    }
    
    //نمایش
    //cout<< "javab:" << output << '\n';

    //پایان

    //getch();
    return 0;
}