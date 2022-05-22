#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a;

    while (cin >> a && a != "0")
    {
        a.push_back('0');
        string num;
        int div = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (div < '9')
            {
                div = div * 10 + (a[i] - '0');
            }
            if (div >= 9)
            {
                num.push_back(div / 9 + '0');
                div %= 9;
            }
            else if (num != "")
                num.push_back('0');
        }

        if (div)
            cout << num << endl;
        else
        {
            string ans = num;
            int i = num.size() - 1;
            while (num[i] == '0')
            {
                num[i] = '9';
                i--;
            }
            if (num[i] == '1' && i == 0)
                num.erase(num.begin(), num.begin() + 1);
            else
                num[i]--;
            cout << num << " " << ans << endl;
        }
    }
}