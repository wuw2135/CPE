#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, d, e;
    while (cin >> a && a)
    {
        cin >> b >> c;
        while (a--)
        {
            cin >> d >> e;
            if (!(d - b) || !(e - c))
                cout << "divisa" << endl;
            else if (d - b > 0 && e - c > 0)
                cout << "NE" << endl;
            else if (d - b < 0 && e - c > 0)
                cout << "NO" << endl;
            else if (d - b < 0 && e - c < 0)
                cout << "SO" << endl;
            else
                cout << "SE" << endl;
        }
    }
}