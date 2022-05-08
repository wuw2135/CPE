#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long int a, b, c, d;
    
    cin >> a;
    while (a--)
    {
        cin >> b >> c;
        d = ((c - 1) + (c - b)) * b / 2;
        cout << d << endl;
    }
}
