#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int arr[100045] = {0};
    for (int j = 1; j < 100000; j++)
    {
        int tmp = j, tot = j;
        while (tmp)
        {
            tot += tmp % 10;
            tmp /= 10;
        }
        if (arr[tot] == 0)
            arr[tot] = j;
    }

    int a, b;

    cin >> a;
    while (a--)
    {
        cin >> b;
        cout << arr[b] << endl;
    }
}