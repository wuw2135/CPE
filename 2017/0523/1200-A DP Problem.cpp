#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, num;
    string b, c;
    bool flag;

    cin >> a;
    while (a--)
    {
        cin >> b;
        flag = true;
        int arr[2] = {0};
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == '=')
            {
                if (c != "")
                    arr[0] += stoi(c);
                c = "";
                flag = false;
            }
            else if (b[i] == 'x')
            {
                if (c == "-" || c == "")
                    c += "1";
                if (flag)
                    arr[1] += stoi(c);
                else
                    arr[1] -= stoi(c);
                c = "";
            }
            else if (b[i] == '+' || b[i] == '-')
            {
                if (c != "")
                {
                    if (flag)
                        arr[0] += stoi(c);
                    else
                        arr[0] -= stoi(c);
                }
                c = "";
                if (b[i] == '-')
                    c.push_back('-');
            }
            else
                c.push_back(b[i]);
        }

        if (c != "")
            arr[0] -= stoi(c);
        c = "";

        if (arr[0] == 0 && arr[1] == 0)
            cout << "IDENTITY\n";
        else if (arr[1] == 0)
            cout << "IMPOSSIBLE\n";
        else
        {
            int ans = floor(arr[0] * -1 / float(arr[1]));
            if (ans == -0)
                cout << 0 << endl;
            else
                cout << ans << endl;
        }
    }
}