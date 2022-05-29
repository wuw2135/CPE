#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    string str1, str2;

    while (cin >> a)
    {
        cin.ignore();
        vector<string> arr;

        for (int i = 0; i < a; i++)
        {
            getline(cin, str1);
            getline(cin, str2);
            arr.push_back(str1);
            arr.push_back(str2);
        }

        cin >> b;
        cin.ignore();
        while (b--)
        {
            getline(cin, str1);
            for (int i = 0; i < a; i++)
            {
                if (str1 == arr[i * 2])
                {
                    cout << arr[i * 2 + 1] << endl;
                    break;
                }
            }
        }
    }
}