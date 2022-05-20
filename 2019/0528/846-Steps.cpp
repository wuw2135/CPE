#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long int a, b, c, step;

    cin >> a;
    while (a--)
    {
        cin >> b >> c;
        step = 0;
        long int now = 1;
        while (b < c)
        {
            if (c - b <= now)
                step++;
            else
                step += 2;
            b += now * 2;
            now++;
        }

        cout << step << endl;
    }
}