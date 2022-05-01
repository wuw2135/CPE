#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a, b, c, d, flag;
    string str;
    cin >> a;
    while (a--)
    {
        flag = 1;
        cin >> b >> c >> d;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'M' || str[i] == 'B' || str[i] == 'R' || str[i] == 'V')
                b--;
            if (str[i] == 'Y' || str[i] == 'B' || str[i] == 'R' || str[i] == 'G')
                c--;
            if (str[i] == 'C' || str[i] == 'B' || str[i] == 'V' || str[i] == 'G')
                d--;

            if (b < 0 || c < 0 || d < 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES " << b << " " << c << " " << d << endl;
        else
            cout << "NO" << endl;
    }
}