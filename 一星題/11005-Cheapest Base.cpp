#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a, b, c, total, costinp, ctmp, smallest;
    vector<long int> cost, totcost;
    while (cin >> a)
    {
        for (int i = 1; i <= a; i++)
        {
            cost.clear();
            for (int i = 0; i < 36; i++)
            {
                cin >> costinp;
                cost.push_back(costinp);
            }
            cout << "Case " << i << ":" << endl;
            cin >> b;

            while (b--)
            {
                cin >> c;
                totcost.clear();
                cout << "Cheapest base(s) for number " << c << ":";
                for (int j = 2; j <= 36; j++)
                {
                    total = 0;
                    ctmp = c;
                    while (ctmp != 0)
                    {
                        total += cost[ctmp % j];
                        ctmp /= j;
                    }
                    totcost.push_back(total);
                }

                smallest = totcost[0];
                for (int j = 1; j < 35; j++)
                {
                    if (totcost[j] < smallest)
                        smallest = totcost[j];
                }

                for (int j = 0; j < 35; j++)
                {
                    if (totcost[j] == smallest)
                        cout << " " << j + 2;
                }
                cout << endl;
            }
            if (i != a)
                cout << endl;
        }
    }
}