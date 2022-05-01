#include <bits/stdc++.h>
using namespace std;
int arr[1000001] = {1}, ansarr[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long int a, b;
    int max = 0, ans;
    
    //Divisor Generation: Sieve
    //https://web.ntnu.edu.tw/~algo/Divisor.html
    for (long int i = 2; i <= 1000000; i++)
    {
        for (long int j = i; j <= 1000000; j += i)
        {
            arr[j]++;
        }
    }

    for (long int i = 1; i <= 1000000; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            ans = i;
            ansarr[i] = ans;
        }
        else
        {
            ansarr[i] = ans;
        }
    }

    cin >> a;
    while (a--)
    {
        max = 1;
        cin >> b;
        cout << ansarr[b] << endl;
    }
}