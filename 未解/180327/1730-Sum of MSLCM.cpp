#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<long long int> arr;
    for (long long int i = 2; i <= sqrt(20000001); i++)
    {
        bool flag = true;
        for (long long int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            arr.push_back(i);
    }

    long long int a, tot;

    while (cin >> a && a)
    {
        int tot = 0;
        for (long long int i = 2; i <= a; i++)
        {
            tot++;
            long long int now = i;
            for (int j = 0; j < arr.size(); j++)
            {
                if (now % arr[j] == 0)
                    tot += arr[j];
                while (now % arr[j] == 0 && now != 1)
                {
                    if (now != arr[j])
                        tot += now;
                    now /= arr[j];
                }
                if (now == 1)
                    break;
            }
        }
        cout << tot << endl;
    }
}