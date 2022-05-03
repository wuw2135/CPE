#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int count = 0;
    while (cin >> a)
    {
        reverse(a.begin(), a.end());
        count++;
        if (a == "0")
        {
            cout << setw(4) << count << ". 0" << endl;
            continue;
        }
        cout << setw(4) << count << ". ";
        int jud = 0, last = 0, sec = 0;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            int num;

            if (!(a[i] - '0') && !jud)
                jud = 0;
            else
                jud = 1;

            if (last && jud)
            {
                cout << " ";
                last = 0;
            }

            if (i >= 9)
            {
                num = i - 7;
                sec = 1;
            }
            else
                num = i;

            if (jud)
                cout << a[i];

            if (num == 7 && (jud || sec))
            {
                cout << " kuti";
                jud = 0;
                last = 1;
                if (sec)
                    sec = 0;
            }
            else if (num == 5 && jud)
            {
                cout << " lakh";
                jud = 0;
                last = 1;
            }
            else if (num == 3 && jud)
            {
                cout << " hajar";
                jud = 0;
                last = 1;
            }
            else if (num == 2 && jud)
            {
                cout << " shata";
                jud = 0;
                last = 1;
            }
        }
        cout << endl;
    }
}