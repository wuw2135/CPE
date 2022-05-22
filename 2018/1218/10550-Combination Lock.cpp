#include <bits/stdc++.h>
using namespace std;
// https://zerojudge.tw/ShowThread?postid=22838&reply=0
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n0, n1, n2, n3;
    while (cin >> n0 >> n1 >> n2 >> n3 && (n0 != 0 || n1 != 0 || n2 != 0 || n3 != 0))
    {
        cout << (120 + ((n1 < n0) * (n0 - n1) + (n1 > n0) * (40 - n1 + n0)) + ((n2 > n1) * (n2 - n1) + (n2 < n1) * (40 - n1 + n2)) + ((n3 < n2) * (n2 - n3) + (n3 > n2) * (40 - n3 + n2))) * 9 << endl;
    }
}