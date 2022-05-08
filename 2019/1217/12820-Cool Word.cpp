#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, count, cases = 1, now, word;
    string b;
    vector<int> num('z' - 'a' + 1, 0);
    bool flag;

    while (cin >> a)
    {
        count = 0;
        while (a--)
        {
            cin >> b;
            now = 0;
            num.assign(num.size(), 0);
            for (char c : b)
                num[c - 'a']++;
            sort(num.begin(), num.end());

            word = 0;
            for (int d : num)
            {
                flag = true;
                if (d == 0)
                    continue;
                if (now != d)
                {
                    now = d;
                    word++;
                }
                else
                {
                    flag = false;
                    break;
                }
            }

            if (flag && word >= 2)
                count++;
        }

        cout << "Case " << cases++ << ": " << count << endl;
    }
}
