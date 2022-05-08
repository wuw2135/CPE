#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    long int b, c, flag, flag2;
    while (cin >> a)
    {
        flag = 1;
        flag2 = 1;
        b = stoll(a);
        reverse(a.begin(), a.end());
        c = stoll(a);

        if (b % 2 == 0)
            flag = 0;
        else if (b == c)
            flag2 = 0;
        else if (c % 2 == 0)
            flag2 = 0;

        if (flag)
        {
            if (b > c)
            {
                for (int i = 3; i <= b / 2; i += 2)
                {
                    if (b % i == 0)
                    {
                        flag = 0;
                        break;
                    }
                    if (c % i == 0 && i != c)
                        flag2 = 0;
                }
            }
            else
            {
                for (int i = 3; i <= c / 2; i += 2)
                {
                    if (b % i == 0 && i != b)
                    {
                        flag = 0;
                        break;
                    }
                    if (c % i == 0)
                        flag2 = 0;
                }
            }
        }

        if (!flag)
            cout << b << " is not prime." << endl;
        else if (flag && !flag2)
            cout << b << " is prime." << endl;
        else if (flag && flag2)
            cout << b << " is emirp." << endl;
    }
}