#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cases, amp, fre;

    cin >> cases;
    while (cases--)
    {
        cin >> amp >> fre;
        while (fre--)
        {
            for (int i = 1; i < amp; i++)
            {
                cout << string(i, i + '0') << endl;
            }
            for (int i = amp; i >= 1; i--)
            {
                cout << string(i, i + '0') << endl;
            }
            if (cases || fre)
                cout << endl;
        }
    }
}