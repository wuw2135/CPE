#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, total;
    vector<int> gro, count;
    cin >> a;
    while (a--)
    {
        cin >> b >> c;
        total = 0;
        gro.clear();
        count.clear();

        while (c--)
        {
            cin >> d;
            gro.push_back(d);
        }

        for (int i = 1; i <= b; i++)
        {
            count.push_back(0);
            for (int j = 0; j < gro.size(); j++)
            {
                if (i % gro[j] == 0)
                    count[i - 1] = 1;
            }
        }

        for (int i = 0; i < b; i++)
        {
            int date = i % 7;
            if (date == 5 || date == 6)
                continue;
            else if (count[i])
                total++;
        }

        cout << total << endl;
    }
}