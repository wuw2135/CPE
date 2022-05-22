#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    string str1, str2;
    map<string, string> mp;

    cin >> a >> b;
    while (a--)
    {
        cin >> str1 >> str2;
        mp[str1] = str2;
    }

    while (b--)
    {
        cin >> str1;
        auto it = mp.find(str1);
        if (it != mp.end())
            cout << it->second << endl;
        else
        {
            for (int i = 0; i < str1.size() - 1; i++)
                cout << str1[i];
            if (str1[str1.size() - 1] == 'y')
            {
                if (str1[str1.size() - 2] != 'a' && str1[str1.size() - 2] != 'e' && str1[str1.size() - 2] != 'i' && str1[str1.size() - 2] != 'o' && str1[str1.size() - 2] != 'u')
                {
                    cout << "ies\n";
                }
                else
                    cout << "ys\n";
            }
            else if (str1[str1.size() - 1] == 'o' || str1[str1.size() - 1] == 's' || (str1[str1.size() - 2] == 'c' && str1[str1.size() - 1] == 'h') || (str1[str1.size() - 2] == 's' && str1[str1.size() - 1] == 'h') || str1[str1.size() - 1] == 'x')
            {
                cout << str1[str1.size() - 1] << "es\n";
            }
            else
                cout << str1[str1.size() - 1] << "s\n";
        }
    }
}