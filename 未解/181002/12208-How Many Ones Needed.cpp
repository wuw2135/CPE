#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int a, b;
    int test = 1;
    while (cin >> a >> b && a && b)
    {
        int count = 0;
        for (long long int i = a; i <= b; i++)
        {
            long long int sec = i;
            while (sec)
            {
                if (sec % 2)
                    count++;
                sec /= 2;
            }
        }

        cout << "Case " << test++ << ": " << count << endl;
    }
}