#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d, countR, flag;
    char e;
    string f;
    cin >> a >> b;
    int arr[a + 100][b + 100] = {
        {0},
        {0},
    };

    while (cin >> c >> d >> e)
    {
        flag = 1;
        if (e == 'N')
            countR = 0;
        else if (e == 'E')
            countR = 1;
        else if (e == 'S')
            countR = 2;
        else
            countR = 3;

        cin >> f;
        for (int i = 0; i < f.size(); i++)
        {
            if (f[i] == 'R')
                countR += 1;
            else if (f[i] == 'L')
                countR -= 1;

            countR %= 4;
            if (countR < 0)
                countR = 4 - abs(countR);
            if (countR == 0)
                e = 'N';
            else if (countR == 1)
                e = 'E';
            else if (countR == 2)
                e = 'S';
            else
                e = 'W';

            if (f[i] == 'F')
            {
                if (countR == 0)
                    d++;
                else if (countR == 1)
                    c++;
                else if (countR == 2)
                    d--;
                else
                    c--;

                if (c > a || c < 0 || d > b || d < 0)
                {
                    if (c > a)
                        c--;
                    else if (c < 0)
                        c = 0;
                    else if (d > b)
                        d--;
                    else if (d < 0)
                        d = 0;
                    if (arr[c][d] == 0)
                    {
                        cout << c << " " << d << " " << e << " LOST" << endl;
                        arr[c][d] = 1;
                        flag = 0;
                        break;
                    }
                }
            }
        }

        if (flag)
            cout << c << " " << d << " " << e << endl;
    }
}