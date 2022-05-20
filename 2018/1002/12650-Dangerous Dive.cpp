#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c;

    while (cin >> a >> b)
    {
        int arr[a + 1] = {0};
        while (b--)
        {
            cin >> c;
            arr[c] = 1;
        }

        bool flag = true;
        for (int i = 1; i <= a; i++)
        {
            if (!arr[i])
            {
                cout << i << " ";
                flag = false;
            }
        }

        if (flag)
            cout << "*";
        cout << endl;
    }
}