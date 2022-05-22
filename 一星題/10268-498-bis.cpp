#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, total, count;
    string b, ss;
    vector<long long int> c;
    while (cin >> a)
    {
        c.clear();
        cin.ignore(1024, '\n');
        getline(cin, b);
        count = 1;
        total = 0;

        istringstream sstream(b);
        while (sstream >> ss)
        {
            c.push_back(stoi(ss));
        }

        long long int pow = 1;
        for (int i = c.size() - 2; i >= 0; i--)
        {
            total += c[i] * count * pow;
            count++;
            pow *= a;
        }
        cout << total << endl;
    }
}