#include <bits/stdc++.h>
using namespace std;

string ten_to_base(long long int a, int b)
{
    string c;
    while (a)
    {
        if (a % b > 9)
        {
            c.push_back(a % b - 10 + 'A');
        }
        else
        {
            c.push_back(a % b + '0');
        }

        a /= b;
    }

    reverse(c.begin(), c.end());
    return c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a;
    int b, c;
    bool flag;
    while (cin >> a >> b >> c)
    {
        flag = 0;
        for (char d : a)
            if (d != '0')
            {
                flag = 1;
                if (ten_to_base(stoll(a, nullptr, b), c).size() > 7)
                {
                    cout << "  ERROR" << endl;
                }
                else
                    cout << setfill(' ') << setw(7) << ten_to_base(stoll(a, nullptr, b), c) << endl;
                break;
            }
        if (!flag)
            cout << "      0" << endl;
    }
}