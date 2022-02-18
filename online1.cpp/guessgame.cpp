#include <iostream>
using namespace std;
int main()
{
    int guess = 0, secretnumber = 100;
    int outofguess = 0, guesscount = 0;
    int guesslimit = 3;
    while (guess != secretnumber && outofguess == 0)
    {
        if (guesscount < guesslimit)
        {
            cout << "please enter number:" << endl;
            cin >> guess;
            guesscount++;
        }
        else
        {
            outofguess++;
        }
    }

    (outofguess == 1) ? cout << "outofguess" : cout << "you win";

    return 0;
}