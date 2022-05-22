#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    char a;
    string b, c;
    bool flag;
    while (cin >> a >> b, getline(cin, c) && a != '#')
    {
        flag = true;
        float tot = 0;
        int d = 0, e = 0, f = 0;
        int srt = ((c[1] - '0') * 10 + (c[2] - '0')) * 60 + (c[4] - '0') * 10 + (c[5] - '0');
        int end = ((c[7] - '0') * 10 + (c[8] - '0')) * 60 + (c[10] - '0') * 10 + (c[11] - '0');

        if (srt >= end)
        {
            d = 600;
            e = 240;
            f = 600;
            swap(srt, end);
            flag = false;
        }

        for (int i = srt + 1; i <= end; i++)
        {
            if (i <= 480 || i > 1320)
            {
                if (flag)
                    f++;
                else
                    f--;
            }
            else if (i > 480 && i <= 1080)
            {
                if (flag)
                    d++;
                else
                    d--;
            }
            else
            {
                if (flag)
                    e++;
                else
                    e--;
            }
        }

        if (a == 'A')
            tot += d * 0.1 + e * 0.06 + f * 0.02;
        else if (a == 'B')
            tot += d * 0.25 + e * 0.15 + f * 0.05;
        else if (a == 'C')
            tot += d * 0.53 + e * 0.33 + f * 0.13;
        else if (a == 'D')
            tot += d * 0.87 + e * 0.47 + f * 0.17;
        else
            tot += d * 1.44 + e * 0.8 + f * 0.3;

        cout << "  " << b << setfill(' ') << setw(6) << d << setfill(' ') << setw(6) << e << setfill(' ') << setw(6) << f << "  " << a << setfill(' ') << setw(8) << setprecision(2) << fixed << tot << endl;
    }
}