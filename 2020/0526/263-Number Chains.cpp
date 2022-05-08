#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a;
    long int b, c, d = 0, count;
    vector<long int> pre;
    bool flag, first;

    while (cin >> a && a != "0")
    {
        count = 0;
        flag = false;
        first = false;
        pre.clear();
        cout << "Original number was " << a << endl;

        while (1)
        {
            for (int i = 0; i < pre.size(); i++)
            {
                if (pre[i] == d)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
            if (first)
                pre.push_back(d);
            else
                first = true;

            sort(a.begin(), a.end(), greater<int>());
            b = stoll(a, nullptr, 10);
            sort(a.begin(), a.end());
            c = stoll(a, nullptr, 10);
            d = b - c;

            a = to_string(d);
            count++;
            cout << b << " - " << c << " = " << d << endl;
        }

        cout << "Chain length " << count << endl
             << endl;
    }
}
