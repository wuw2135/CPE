#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a, tot, deff;
    cin >> a;
    for (int z = 1; z <= a; z++)
    {
        cin >> tot >> deff;
        if (deff > tot || (tot + deff) % 2 != 0 || (tot - deff) % 2 != 0)
            cout << "impossible" << endl;
        else
            cout << (tot + deff) / 2 << " " << (tot - deff) / 2 << endl;
    }
}