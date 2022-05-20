#include <iostream>
#include <conio.h>
using namespace std;
int main() 

{
    //تعریف متغیر
    int number1, number2, jam, tafrigh, zarb, taghsim;


    //ورودی ها
    cout<< "enter number 1: ";
    cin>>number1;
    cout<< "enter number 2: ";
    cin>>number2;
    
    //عملیات اصلی
    jam = number1 + number2;

    tafrigh = number1 - number2;

    zarb = number1 * number2;

    taghsim = number1 / number2;

    //نمایش
    cout<< "jam:" << jam << '\n';
    cout<< "tafrigh:"<< tafrigh << '\n';
    cout<< "zarb:"<<zarb << '\n';
    cout<< "taghsim:"<<taghsim << '\n';

    //پایان

    //getch();
    return 0;
}