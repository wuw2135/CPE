#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int a, b, c, d, i = 1, top, bm;
    
    while (cin >> a >> b >> c >> d && a && b && c && d)
    {
        cout << "Case #" << i << ": ";
        (b * c < d * a ? cout << "You owe me a beer!" << endl : cout << "No beer for the captain." << endl);
        cout << "Avg. arrival time: ";
        top = b * c + d * a;
        bm = 2 * a * c;
        if (top % bm != 0)
            cout << top / __gcd(top, bm) << "/" << bm / __gcd(top, bm) << endl;
        else
            cout << top / bm << endl;
        i++;
    }
}