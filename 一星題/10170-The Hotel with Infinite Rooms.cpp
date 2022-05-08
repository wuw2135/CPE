#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a, b, day;
    while (cin >> a >> b)
    {
        day = 0;
        while (day < b)
        {
            day += a;
            a++;
        }
        a -= 1;
        cout << a << endl;
    }
}