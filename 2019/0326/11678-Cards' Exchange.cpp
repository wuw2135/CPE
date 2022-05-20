#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    set<int> set1, set2;
    int a, b, c, count;
    while (cin >> a >> b && a && b)
    {
        count = 0;
        set1.clear();
        set2.clear();
        for (int i = 0; i < a; i++)
        {
            cin >> c;
            set1.insert(c);
        }

        for (int i = 0; i < b; i++)
        {
            cin >> c;
            set2.insert(c);
        }

        for (set<int>::iterator it = set1.begin(); it != set1.end(); it++)
        {
            if (set2.count(*it))
                count++;
        }

        cout << min(set1.size() - count, set2.size() - count) << endl;
    }
}