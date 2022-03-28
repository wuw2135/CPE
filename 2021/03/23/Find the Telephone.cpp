#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> mp;
    int num = 2, count = 1;
    for (int i = 0; i < 26; i++)
    {
        if ('A' + i == 'S' || 'A' + i == 'Z')
        {
            mp['A' + i] = num - 1;
            count = 0;
        }
        else
            mp['A' + i] = num;
        if (count == 3)
        {
            num++;
            count = 0;
        }
        count++;
    }

    string str;
    while (getline(cin, str))
    {
        for (char ch : str)
        {
            if (ch >= 'A' && ch <= 'Z')
                cout << mp[ch];
            else
                cout << ch;
        }
        cout << endl;
    }
}