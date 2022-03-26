#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, pop;
    string b;
    while (cin >> a, a)
    {
        deque<int> lfri = {1, 4, 6, 3};
        deque<int> updn = {1, 2, 6, 5};
        while (a--)
        {
            cin >> b;
            if (b == "north")
            {
                pop = updn.back();
                updn.pop_back();
                updn.push_front(pop);
                lfri[0] = pop;
                lfri[2] = updn[2];
            }
            else if (b == "east")
            {
                pop = lfri.back();
                lfri.pop_back();
                lfri.push_front(pop);
                updn[0] = pop;
                updn[2] = lfri[2];
            }
            else if (b == "south")
            {
                pop = updn.front();
                updn.pop_front();
                updn.push_back(pop);
                lfri[0] = updn.front();
                lfri[2] = updn[2];
            }
            else
            {
                pop = lfri.front();
                lfri.pop_front();
                lfri.push_back(pop);
                updn[0] = lfri.front();
                updn[2] = lfri[2];
            }
        }

        cout << lfri[0] << endl;
    }
}
