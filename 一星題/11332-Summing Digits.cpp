#include <bits/stdc++.h>
using namespace std;

int fun(int a)
{
    if (a < 10)
        return a;
    else
        return fun(fun(a / 10) + a % 10);
}
int main()
{
    long int a;
    while (cin >> a, a)
    {
        cout << fun(a) << endl;
    }
    return 0;
}