#include <bits/stdc++.h>
using namespace std;
// merge sort
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long int a, b, count;
    vector<long int> arr;

    while (cin >> a && a)
    {
        arr.clear();
        count = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> b;
            arr.push_back(b);
        }

        long int arr2[a];
        for (long int i = 1; i < a; i += i)
        {
            for (long int j = 0; j < a; j += i + i)
            {
                long int start1 = j, end1 = min(j + i, a);
                long int start2 = min(j + i, a), end2 = min(j + i + i, a);
                long int n = j;
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

            for (long int i = 0; i < a; i++)
                arr[i] = arr2[i];
        }

        cout << count << endl;
    }
}