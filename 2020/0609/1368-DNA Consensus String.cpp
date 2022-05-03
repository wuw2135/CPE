#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, max, tot;
    char maxc;
    string str, ans;
    vector<string> arr;
    map<char, int> mp;

    cin >> a;
    while (a--)
    {
        cin >> b >> c;
        arr.clear();
        tot = 0;
        for (int i = 0; i < b; i++)
        {
            cin >> str;
            arr.push_back(str);
        }

        for (int i = 0; i < c; i++)
        {
            mp.clear();

            for (int j = 0; j < b; j++)
            {
                mp[arr[j][i]]++;
            }

            max = 0;

            for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
            {
                if (it->second > max)
                {
                    maxc = it->first;
                    max = it->second;
                }
            }

            tot += b - max;
            ans.push_back(maxc);
        }

        cout << ans << endl
             << tot << endl;
        ans = "";
    }
}