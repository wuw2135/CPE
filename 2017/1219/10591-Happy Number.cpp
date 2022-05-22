#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cases = 1;
    long long int a, b, c;

    cin >> a;
    while (cin >> a)
    {
        c = a;
        b = 0;
        while (true)
        {
            if (a == 0)
            {
                if (b < 10 || b == 1)
                    break;
                a = b;
                b = 0;
            }
            b += (a % 10) * (a % 10);
            a /= 10;
        }

        if (b == 1)
            cout << "Case #" << cases++ << ": " << c << " is a Happy number.\n";
        else
            cout << "Case #" << cases++ << ": " << c << " is an Unhappy number.\n";
    }
}