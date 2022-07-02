#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int sum(int a, int b);
bool checkAnswer(char ans[], char c, int corr[], int l);
void coutArr(char c[], int i[], int ll);

int main()
{ // word = shop
    char answer[51], in;

    int counter = 0, correct[50] = {0}, attempts = 10, len;
    bool T = true, done = true;

    cout << "Enter desired word (maximum 50 charachter) :";
    cin.getline(answer, 50);
    len = strlen(answer);

    // for (int i = 0; i < len; i++)
    //     correct[i] = 0;

    system("cls");

    cout << "Welcome to the \"Guess The Word\"!\nyou have " << attempts << " attempts to guess the " << len << " letter word.\nGood luck!\n";
    while (T == true)
    {
        done = true;
        cout << "\nattempt number " << counter + 1 << " :";
        cin >> in;

        if (!checkAnswer(answer, in, correct, len))
            counter++;

        cout << "\n";

        for (int x = 0; x < len; x++)
            if (correct[x] == 0)
                done = false;

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
bool checkAnswer(char ans[], char c, int corr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        if (ans[i] == c && corr[i] == 0)
        {
            corr[i] = 1;

            cout << "correct guess!\n";
            coutArr(ans, corr, l);
            return true;
        }
    }

    cout << "wrong guess!\n";
    coutArr(ans, corr, l);
    return false;
}
void coutArr(char c[], int i[], int ll)
{
    for (int x = 0; x < ll; x++)
    {
        cout << ((i[x] == 1) ? (c[x]) : ('_')) << " ";
    }
}
