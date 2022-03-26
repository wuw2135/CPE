#include <bits/stdc++.h>
using namespace std;

int main()
{
    int group;
    cin >> group;

    while (group--)
    {
        int relas;
        cin >> relas;
        vector<int> c;
        for (int i = 0; i < relas; i++)
        {
            int stres;
            cin >> stres;
            c.push_back(stres);
        }
        sort(c.begin(), c.end());
        int middle = relas / 2;
        int total = 0;
        for (int i = 0; i < relas; i++)
        {
            total += abs(c[i] - c[middle]);
        }
        cout << total << endl;
    }
}
