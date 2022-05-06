#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, max;
    
    while (cin >> a >> b && a && b)
    {
        max = 0;
        int final[10000] = {0};

        for (int i = 0; i < a * b; i++)
        {
            cin >> c;
            final[i % a] += c;
            if (final[i % a] >= final[max])
                max = i % a;
        }

        cout << max + 1 << endl;
    }
}