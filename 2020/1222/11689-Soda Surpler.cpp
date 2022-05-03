#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, tot;
    cin >> a;
    while (a--)
    {
        cin >> b >> c >> d;
        tot = 0;
        b += c;
        while (b >= d)
        {
            tot += b / d;
            b = b % d + b / d;
        }
        cout << tot << endl;
    }
}