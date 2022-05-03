#include <bits/stdc++.h>
using namespace std;
int a, b;

bool compare(int d, int e)
{
    if ((d % b) != (e % b))
        return (d % b) < (e % b);
    else
    {
        if ((d % 2) * (e % 2))
            return d > e;
        else if ((d % 2 == 0) && (e % 2 == 0))
            return d < e;
        else
            return (d % 2);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int c;
    vector<int> arr;
    while (cin >> a >> b)
    {
        if (a == 0 & b == 0)
        {
            cout << "0 0" << endl;
            break;
        }
        arr.clear();
        cout << a << " " << b << endl;
        for (int i = 0; i < a; i++)
        {
            cin >> c;
            arr.push_back(c);
        }

        sort(arr.begin(), arr.end(), compare);

        for (int f : arr)
            cout << f << endl;
    }
}