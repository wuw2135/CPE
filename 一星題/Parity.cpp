#include <bits/stdc++.h>
using namespace std;

string binary(int x)
{
    string y;
    while (x != 0)
    {
        y.push_back(x % 2 + '0');
        x /= 2;
    }
    reverse(y.begin(), y.end());
    return y;
}

int main()
{
    int b, binto;
    string bin;
    while (cin >> b, b)
    {
        bin = binary(b);
        binto = 0;

        for (char c : bin)
        {
            if (c == '1')
                binto++;
        }

        cout << "The parity of " << bin << " is " << binto << " (mod 2)." << endl;
    }
}