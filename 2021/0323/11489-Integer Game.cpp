#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a;
    long long int sum, count, b, flag;

    cin >> b;
    for (int t = 1; t <= b; t++)
    {
        cin >> a;
        count = 0;
        flag = 1;

        while (flag)
        {
            flag = 0;
            int size = a.size();
            if (size == 1)
            {
                count++;
                break;
            }

            for (int i = 0; i < size; i++)
            {
                sum = 0;
                for (int j = 0; j < size; j++)
                {
                    if (i == j)
                        continue;
                    else
                        sum += a[j] - '0';
                }
                if (sum % 3 == 0)
                {
                    count++;
                    a.erase(a.begin() + i);
                    flag = 1;
                    break;
                }
            }
        }

        if (count % 2)
            cout << "Case " << t << ": S" << endl;
        else
            cout << "Case " << t << ": T" << endl;
    }
}