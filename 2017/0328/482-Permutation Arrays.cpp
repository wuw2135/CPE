#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    string b, c, bs, cs;

    cin >> a;
    cin.ignore();
    cin.ignore();
    while (getline(cin, b), a--)
    {
        vector<int> arrint;
        istringstream is(b), is2(c);
        while (is >> bs)
        {
            arrint.push_back(stoi(bs));
        }

        vector<string> arrstr(arrint.size());
        for (int i = 0; i < arrint.size(); i++)
        {
            cin >> c;
            arrstr[arrint[i] - 1] = c;
        }

        for (int i = 0; i < arrint.size(); i++)
        {
            cout << arrstr[i] << endl;
        }

        if (a)
        {
            cout << endl;
            cin.ignore();
            cin.ignore();
        }
    }
}