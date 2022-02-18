#include <iostream>
using namespace std;
int main()
{
    int num1 = 0, num2 = 0, ans = 0;
    char op;
    cout << "please enter your number :" << endl;
    cin >> num1 >> op >> num2;
    if (op == '+')
    {
        ans = num1 + num2;
    }
    else if (op == '-')
    {
        ans = num1 - num2;
    }
    else if (op == '*')
    {
        ans = num1 * num2;
    }
    else if (op == '/')
    {
        ans = num1 / num2;
    }
    else
    {
        cout << "invalid operator";
    }

    cout << ans << endl;

    return 0;
}