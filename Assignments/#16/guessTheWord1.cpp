#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int sum(int a, int b);
bool checkAnswer(char ans[], char c, int corr[]);
void coutArr(char c[], int i[]);

int main()
{//word = shop
    char answer[5] = {'s', 'h', 'o', 'p'}, in;

    int counter = 0, correct[5] = {0}, attempts = 10;
    bool T = true, done = true;
    cout << "Welcome to the \"Guess The Word\"!\nyou have " << attempts << " attempts to guess the 4 letter word.\nGood luck!\n";
    while (T == true)
    {
        done = true;
        cout << "\nattempt number " << counter+1 << " :";
        cin >> in;
        if (checkAnswer(answer, in, correct))
        {
            cout << "correct guess!\n";
            coutArr(answer, correct);
        }
        else
        {
            cout << "wrong guess!\n";
            coutArr(answer, correct);
            counter++;
        }
        cout << "\n";
        for (int x = 0; x < 4; x++)
        {
            if (correct[x] == 0)
            {
                done = false;
            }
        }

        if (done)
        {
            cout << "well done!";
            T = false;
        }
        else
        {
            if ((attempts - counter) == 0)
            {
                cout << "OOPS! you ran out of attempts.";
                T = false;
            }
            else
            {
                cout << attempts - counter << " try left!\n";
            }
        }
    }

    _getch();
    return 0;
}
bool checkAnswer(char ans[], char c, int corr[])
{
    for (int i = 0; i < 4; i++)
    {
        if (ans[i] == c)
        {
            corr[i] = 1;
            return true;
        }
    }

    return false;
}
void coutArr(char c[], int i[])
{
    for (int x = 0; x < 4; x++)
    {
        cout << ((i[x] == 1) ? (c[x]) : ('_')) << " ";
    }
}
