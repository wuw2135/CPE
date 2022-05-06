#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, ste, ave, fri, po1, po2, mid1, mid2;
    vector<int> po1arr, po2arr;
    
    cin >> a;
    while (a--)
    {
        po1arr.clear();
        po2arr.clear();
        cin >> ste >> ave >> fri;
        for (int i = 0; i < fri; i++)
        {
            cin >> po1 >> po2;
            po1arr.push_back(po1);
            po2arr.push_back(po2);
        }

        sort(po1arr.begin(), po1arr.end());
        sort(po2arr.begin(), po2arr.end());

        if (fri % 2 == 0)
        {
            mid1 = po1arr[fri / 2 - 1];
            mid2 = po2arr[fri / 2 - 1];
        }
        else
        {
            mid1 = po1arr[fri / 2];
            mid2 = po2arr[fri / 2];
        }

        cout << "(Street: " << mid1 << ", Avenue: " << mid2 << ")\n";
    }
}