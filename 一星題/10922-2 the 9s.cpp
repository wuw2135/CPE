#include <bits/stdc++.h>
using namespace std;

int nine(string x, int count)
{
    if (x == "9")
        return count;
    else
    {
        long long int tran = 0;
        for (char a : x)
            tran += (a - '0');
        if (tran % 9 == 0)
            return nine(to_string(tran), count + 1);
        else
            return 0;
    }
}

int main()
{
    string a;
    int b;
    while (getline(cin, a))
    {
        if (a == "0")
            break;
        b = nine(a, 0);
        if (b)
        {
            cout << a << " is a multiple of 9 and has 9-degree " << b << "." << endl;
        }
        else
            cout << a << " is not a multiple of 9." << endl;
    }
}