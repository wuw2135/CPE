#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a;
    while (a--)
    {
        cin >> b;
        string str;
        int arr[10] = {0};
        for (int i = 1; i <= b; i++)
        {
            str += to_string(i);
        }

        for (int i = 0; i < str.size(); i++)
        {
            arr[str[i] - '0']++;
        }

        for (int i = 0; i < 10; i++)
        {
            if (i != 9)
                cout << arr[i] << " ";
            else
                cout << arr[i] << endl;
        }
    }
}