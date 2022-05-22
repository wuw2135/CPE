#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, cases = 1;
    while (cin >> a && a > -1)
    {
        int count = 0;
        for (int i = 1; i < a; i *= 2)
            count++;
        cout << "Case " << cases++ << ": " << count << endl;
    }
}