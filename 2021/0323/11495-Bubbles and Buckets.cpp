#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int a, b, count;
    vector<long long int> arr;

    while (cin >> a && a)
    {
        arr.clear();
        count = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> b;
            arr.push_back(b);
        }

        long long int arr2[a];
        for (long long int i = 1; i < a; i += i)
        {
            for (long long int j = 0; j < a; j += i + i)
            {
                long long int start1 = j, end1 = min(j + i, a);
                long long int start2 = min(j + i, a), end2 = min(j + i + i, a);
                long long int n = j;
                while (start1 < end1 && start2 < end2)
                {
                    if (arr[start1] > arr[start2])
                    {
                        arr2[n++] = arr[start2++];
                        count += end1 - start1;
                    }
                    else if (arr[start1] < arr[start2])
                    {
                        arr2[n++] = arr[start1++];
                    }
                }

                while (start1 < end1)
                    arr2[n++] = arr[start1++];
                while (start2 < end2)
                    arr2[n++] = arr[start2++];
            }

            for (long long int j = 0; j < a; j++)
                arr[j] = arr2[j];
        }

        if (count % 2)
            cout << "Marcelo" << endl;
        else
            cout << "Carlos" << endl;
    }
}