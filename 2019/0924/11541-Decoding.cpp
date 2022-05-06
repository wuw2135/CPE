#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    string b, count;

    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> b;
        cout << "Case " << i << ": ";
        for (int j = 0; j < b.size();)
        {
            while (b[j + 1] >= '0' && b[j + 1] <= '9')
            {
                j++;
                count.push_back(b[j]);
            }

            int copy = stoi(count);
            while (copy--)
            {
                cout << b[j - count.size()];
            }

            count.clear();
            j++;
        }

        cout << endl;
    }
}