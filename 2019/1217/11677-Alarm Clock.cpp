#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, d, tot;
    
    while (cin >> a >> b >> c >> d && (a || b || c || d))
    {
        tot = 0;
        if ((a == c && b > d) || a > c)
        {
            tot += 60 * c + d + 60 * (23 - a) + (60 - b);
        }
        else
        {
            tot += 60 * (c - a) + d - b;
        }

        cout << tot << endl;
    }
}
