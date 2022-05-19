#include <iostream>
#include <conio.h>
using namespace std;
int main() 
{
    //تعریف متغیر
    int z1,z2,z3;


    //ورودی ها
    cout<< "enter azla: ";
    cin>>z1;
    cin>>z2;
    cin>>z3;
    
    //عملیات اصلی
    if ((z1 == z2) || (z2 == z3) || (z2 == z3)){
        cout<<"motasaviol saghain ast";
    } else {
        cout<<"motasaviol saghain nist";
    }
    
    //نمایش
    //cout<< "javab:" << output << '\n';

    //پایان

    //getch();
    return 0;
}