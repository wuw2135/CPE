#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    string b;

    cin >> a;
    cin.ignore();
    cin.ignore();

    for (int i = 1; i <= a; i++)
    {
        if (i != 1)
            cout << "\n";
        cout << "Case #" << i << ":" << endl;
        while (getline(cin, b) && b != "")
        {
            istringstream stm(b);
            string str;
            int n = 0;
            while (stm >> str)
            {
                if (str.size() - 1 >= n)
                {
                    cout << str[n];
                    n++;
                }
            }
            cout << "\n";
        }
    }
}