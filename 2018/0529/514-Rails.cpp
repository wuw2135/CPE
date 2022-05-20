#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;

    while (cin >> a && a)
    {
        bool flag = true, che = true;
        while (flag)
        {
            stack<int> stat;
            stat.emplace(1);
            int j = 2;
            che = true;

            for (int i = 0; i < a; i++)
            {
                cin >> b;
                if (b == 0)
                {
                    flag = false;
                    break;
                }

                if (che)
                {
                    while (j <= b)
                    {
                        stat.emplace(j++);
                    }

                    if (stat.top() == b)
                        stat.pop();
                    else
                        che = false;
                }
            }

            if (che && flag)
                cout << "Yes\n";
            else if (flag)
                cout << "No\n";
        }

        cout << endl;
    }
}