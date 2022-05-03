#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a;
    int dif = '1' - '*';
    while (cin >> a)
    {
        for (char b : a)
        {
            cout << char(b - dif);
        }
        cout << endl;
    }
}