#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long long int a;

    while (cin >> a)
    {
        long long long int tot = ((1 + a) * ((a - 1) / 2 + 1)) / 2;
        cout << tot * 6 - 9 << endl;
    }
}