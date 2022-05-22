#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;

    cin >> a;
    while (a--)
    {
        cin >> b;
        int tot = 1;

        for (int i = 2; i <= sqrt(b); i++)
        {
            if (b % i == 0)
            {
                if (i == b / i)
                    tot += i;
                else
                    tot += i + b / i;
            }
        }

        if (tot < b)
            cout << "deficient\n";
        else if (tot == b)
            cout << "perfect\n";
        else
            cout << "abundant\n";
    }
}