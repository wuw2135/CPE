#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    for (int z = 1; z <= a; z++)
    {
        cin >> b >> c;
        b = (b % 2 == 0 ? b + 1 : b);
        c = (c % 2 == 0 ? c - 1 : c);
        cout << "Case " << z << ": " << ((b + c) * ((c - b) / 2 + 1)) / 2 << endl;
    }
}