#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, top, bm, flag = 0, count = 0;
    while (cin >> a, a)
    {
        if (!count)
            count++;
        else
            cout << endl;
        flag = 0;
        bm = 1234;
        if (a >= 80)
        {
            cout << "There are no solutions for " << a << "." << endl;
            continue;
        }

        top = 0;
        while (top < 100000)
        {
            int flag2 = 1;
            int arr[10] = {0};
            top = bm * a;
            string str = to_string(top) + to_string(bm);

            if (top < 10000)
                str.push_back('0');
            if (bm < 10000)
                str.push_back('0');

            for (char ch : str)
            {
                if (!arr[ch - '0'])
                    arr[ch - '0'] = 1;
                else
                {
                    flag2 = 0;
                    break;
                }
            }
            if (flag2)
            {
                cout << setw(5) << setfill('0') << top << " / " << setw(5) << setfill('0') << bm << " = " << a << endl;
                flag = 1;
            }
            bm++;
        }

        if (!flag)
            cout << "There are no solutions for " << a << "." << endl;
    }
}