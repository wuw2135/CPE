#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;

    while (cin >> a && a != -1)
    {
        long long int b = 0, c = 1;
        while (a--)
        {
            int tmp = b;
            b = c;
            c += tmp + 1;
        }
        cout << b << " " << c << endl;
    }
}