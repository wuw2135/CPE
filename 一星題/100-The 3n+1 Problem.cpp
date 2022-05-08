#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long int i, j;
    vector<long int> arr;
    for (int i = 1; i < 1000000; i++)
    {
        long int count = 1, now = i;
        while (now != 1)
        {
            if (now % 2 == 1)
                now = 3 * now + 1;
            else
                now = now / 2;
            count++;
        }
        arr.push_back(count);
    }

    while (cin >> i >> j)
    {
        long int max = 0;
        cout << i << " " << j << " ";

        if (i > j)
            swap(i, j);
        for (; i <= j; i++)
        {
            if (arr[i - 1] > max)
                max = arr[i - 1];
        }
        cout << max << endl;
    }
}