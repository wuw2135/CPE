#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int total = 0, ind = 2, inp, tmp, a;
    vector<long long int> fib = {0, 1};

    while (total <= 100000000)
    {
        total = fib[ind - 1] + fib[ind - 2];
        fib.push_back(fib[ind - 1] + fib[ind - 2]);
        ind++;
    }

    cin >> a;
    while (a--)
    {
        cin >> inp;
        cout << inp << " = ";
        tmp = inp;

        for (int i = ind - 1; i >= 2; i--)
        {
            if (fib[i] > inp)
                continue;
            else if (inp > fib[i] && fib[i] > tmp)
            {
                cout << 0;
            }
            else if (tmp >= fib[i])
            {
                cout << 1;
                tmp -= fib[i];
            }
        }
        cout << " (fib)" << endl;
    }
}