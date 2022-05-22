#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, low, high, count, buy;
    string mak, ans;
    string makarr[10001];
    long long int pri[10001][3] = {0};

    cin >> a;
    for (int z = 0; z < a; z++)
    {
        if (z != 0)
            cout << endl;

        cin >> b;
        for (int i = 0; i < b; i++)
        {
            cin >> mak >> low >> high;
            makarr[i] = mak;
            pri[i][0] = low;
            pri[i][1] = high;
        }

        cin >> c;
        for (int i = 0; i < c; i++)
        {
            cin >> buy;
            count = 0;
            ans = "UNDETERMINED";
            for (int j = 0; j < b; j++)
            {
                if (buy >= pri[j][0] && buy <= pri[j][1])
                {
                    ans = makarr[j];
                    count++;
                }
                if (count > 1)
                {
                    ans = "UNDETERMINED";
                    break;
                }
            }

            cout << ans << endl;
        }
    }
}
