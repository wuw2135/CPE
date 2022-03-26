#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a, b, total;
    while (cin >> a >> b, a, b)
    {
        int d = sqrt(a);
        int c = sqrt(b);
        total = c - d;
        if (d == sqrt(a))
            total++;
        cout << total << endl;
    }
}