#include <iostream>
#include <conio.h>
using namespace std;
int main() 
{
    //تعریف متغیر
    int season;

    //ورودی ها
    cout<< "enter season: ";
    cin>>season;
    
    //عملیات اصلی
    if (season == 1){
        cout<<"it's spring!";
    } else if (season == 2){
        cout<<"it's summer!";
    } else if (season == 3){
        cout<<"it's fall!";
    } else if (season == 4){
        cout<<"it's winter!";
    } else {
        cout<<"invalid season index.";
    }
    
    //نمایش
    //cout<< "javab:" << output << '\n';

    //پایان

    //getch();
    return 0;
}