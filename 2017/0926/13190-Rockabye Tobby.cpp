#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cases, thing, times, num, mul;
    string str;

    cin >> cases;
    while (cases--)
    {
        mul = 0;
        cin >> thing >> times;
        vector<string> thiarr;
        vector<int> timearr;
        for (int i = 0; i < thing; i++)
        {
            cin >> str >> num;
            thiarr.push_back(str);
            timearr.push_back(num);
            if (mul == 0)
                mul = num;
            else
                mul = __gcd(mul, num);
        }

        int j = mul;
        while (times)
        {
            for (int i = 0; i < thing; i++)
            {
                if (mul % timearr[i] == 0)
                {
                    cout << mul << " " << thiarr[i] << endl;
                    times--;
                    if (!times)
                        break;
                }
            }

            mul += j;
        }
    }
}