#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    string b;
    map<char, int> mp;
    vector<int> arr;
    cin >> a;
    cin.ignore(1024, '\n');
    while (a--)
    {
        getline(cin, b);
        for (char &ch : b)
        {
            if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
                mp[toupper(ch)]++;
        }
    }
    for (auto &p : mp)
        arr.push_back(p.second);
    sort(arr.begin(), arr.end(), greater<int>());
    for (int d : arr)
    {
        for (auto &p : mp)
        {
            if (p.second == d)
            {
                cout << p.first << " " << d << endl;
                mp.erase(p.first);
                break;
            }
        }
    }
}