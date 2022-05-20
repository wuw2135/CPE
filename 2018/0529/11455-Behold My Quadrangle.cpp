#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long int test, a, b, c, d;

    cin >> test;
    while (test--)
    {
        cin >> a >> b >> c >> d;
        if (b + c + d <= a || a + c + d <= b || a + b + d <= c || a + b + c <= d)
            cout << "banana" << endl;
        else if (a == b && b == c && c == d)
            cout << "square" << endl;
        else if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
            cout << "rectangle" << endl;
        else
            cout << "quadrangle" << endl;
    }
}