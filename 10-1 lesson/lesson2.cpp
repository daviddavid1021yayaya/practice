#include <iostream>
using namespace std;

class base
{
protected:
    int a, b;

public:
    void setab(int n, int m)
    {
        a = n;
        b = m;
    }
};

class derived : public base
{
    int c;

public:
    void setc(int n) { c = n; }
    void show() { cout << a << " " << b << " " << c << endl; }
};