#include <bits/stdc++.h>
using namespace std;

int sch[481];
int a = 0;
string time1 = "", time2 = "";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int count = 1;

    while (cin >> a)
    {
        memset(sch, 0, sizeof(sch));
        int mintime = 0, mintime2 = 0, anstime = 0, strtime = 0, endtime = 0;

        while (a--)
        {
            cin >> time1 >> time2;
            cin.ignore(1024, '\n');
            strtime = 60 * (time1[1] - '0') + 10 * (time1[3] - '0') + (time1[4] - '0');
            endtime = 60 * (time2[1] - '0') + 10 * (time2[3] - '0') + (time2[4] - '0');
            for (int i = strtime; i < endtime; i++)
                sch[i] = 1;
        }

        int i;
        for (i = 0; i < 480; i++)
        {
            if (sch[i] == 0)
                mintime2++;
            else
            {
                if (mintime2 > mintime)
                {
                    mintime = mintime2;
                    anstime = i - mintime2;
                }
                mintime2 = 0;
            }
        }

        if (mintime2 > mintime)
        {
            mintime = mintime2;
            anstime = i - mintime2;
        }

        cout << "Day #" << count++ << ": the longest nap starts at " << anstime / 60 + 10 << ":" << setfill('0') << setw(2) << anstime % 60 << " and will last for ";
        if (mintime / 60)
        {
            cout << mintime / 60 << " hours and " << mintime % 60 << " minutes.\n";
        }
        else
            cout << mintime << " minutes.\n";
    }
    return 0;
}