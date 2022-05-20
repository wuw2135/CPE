#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> arr = {0, 1, 1, 1};
    for (int i = 4; i < 32768; i++)
    {
        bool flag = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = false;
                arr.push_back(0);
                break;
            }
        }

        if (flag)
            arr.push_back(1);
    }

    int a;
    while (cin >> a && a)
    {
        int count = 0;
        for (int i = 2; i <= a / 2; i++)
        {
            if (arr[i] == 1 && arr[a - i] == 1)
                count++;
        }

        cout << count << endl;
    }
}