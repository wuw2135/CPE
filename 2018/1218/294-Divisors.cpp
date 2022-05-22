#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;

    cin >> a;
    while (a--)
    {
        long long int b, c, count, maxcount = 0, max;
        cin >> b >> c;
        for (int i = b; i <= c; i++)
        {
            count = 0;
            for (int j = 1; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    if (i / j == j)
                        count++;
                    else
                        count += 2;
                }
            }

            if (maxcount < count)
            {
                maxcount = count;
                max = i;
            }
        }

        cout << "Between " << b << " and " << c << ", " << max << " has a maximum of " << maxcount << " divisors.\n";
    }
}