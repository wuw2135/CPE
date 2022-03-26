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

int hexad(int x)
{
    string y;
    int count = 1, hex = 0;
    y = to_string(x);
    for (char c : y)
    {
        hex += (c - '0') * count;
        count *= 16;
    }
    return hex;
}

int main()
{
    int a, b, binto = 0, hexto = 0;
    string bin, hex;
    cin >> a;
    while (a--)
    {
        binto = 0;
        hexto = 0;
        cin >> b;
        bin = binary(b);
        hex = binary(hexad(b));
        for (char c : bin)
        {
            if (c == '1')
                binto++;
        }
        for (char c : hex)
        {
            if (c == '1')
                hexto++;
        }
        cout << binto << " " << hexto << endl;
    }
}