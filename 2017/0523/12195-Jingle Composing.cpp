#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a;
    while (cin >> a && a != "*")
    {
        float count = 0;
        int sum = 0;
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] == '/')
            {
                if (count == 1)
                    sum++;
                count = 0;
            }
            else if (a[i] == 'W')
                count++;
            else if (a[i] == 'H')
                count += 1 / 2.0;
            else if (a[i] == 'Q')
                count += 1 / 4.0;
            else if (a[i] == 'E')
                count += 1 / 8.0;
            else if (a[i] == 'S')
                count += 1 / 16.0;
            else if (a[i] == 'T')
                count += 1 / 32.0;
            else if (a[i] == 'X')
                count += 1 / 64.0;
        }
        cout << sum << endl;
    }
}