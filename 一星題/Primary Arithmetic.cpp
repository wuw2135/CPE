#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b && (a || b))
    {
        int count = 0, carry = 0;
        while (a || b)
        {
            if ((a % 10 + b % 10 + carry) >= 10)
            {
                count++;
                carry = 1;
            }
            else
                carry = 0;
            a /= 10;
            b /= 10;
        }
        if (count > 1)
            cout << count << " carry operations." << endl;
        else if (count == 1)
            cout << count << " carry operation." << endl;
        else
            cout << "No carry operation." << endl;
    }
}