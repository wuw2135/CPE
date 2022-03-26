#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, flag, count = 1, tmp;
    vector<int> c, d;
    while (cin >> a)
    {
        c.clear();
        d.clear();

        flag = 0;

        cin >> b;
        c.push_back(b);
        tmp = b;
        if (b <= 0)
            flag = 1;
        for (int i = 1; i < a; i++)
        {
            cin >> b;
            if (tmp > b || b <= 0)
                flag = 1;
            else
                tmp = b;
            c.push_back(b);
        }

        if (!flag)
        {
            for (int j = 0; j < c.size(); j++)
            {
                for (int z = j; z < c.size(); z++)
                {
                    d.push_back(c[j] + c[z]);
                }
            }

            sort(d.begin(), d.end());
            tmp = d[0];

            for (int j = 1; j < d.size(); j++)
            {
                if (tmp != d[j])
                    tmp = d[j];
                else
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag)
            cout << "Case #" << count << ": It is not a B2-Sequence." << endl;
        else
            cout << "Case #" << count << ": It is a B2-Sequence." << endl;
        cout << endl;
        count++;
    }
}