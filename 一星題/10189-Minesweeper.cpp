#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, count = 1;
    string c;

    while (cin >> a >> b, a, b)
    {
        if (count != 1)
            cout << endl;

        char arr[a][b];
        cout << "Field #" << count << ":" << endl;

        for (int i = 0; i < a; i++)
        {
            cin >> c;
            for (int j = 0; j < b; j++)
            {
                if (c[j] == '*')
                    arr[i][j] = '*';
                else
                    arr[i][j] = '0';
            }
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (arr[i][j] == '*')
                {
                    if (arr[i][j + 1] != '*' && j + 1 < b)
                        arr[i][j + 1]++;
                    if (arr[i + 1][j] != '*' && i + 1 < a)
                        arr[i + 1][j]++;
                    if (arr[i][j - 1] != '*' && j - 1 >= 0)
                        arr[i][j - 1]++;
                    if (arr[i - 1][j] != '*' && i - 1 >= 0)
                        arr[i - 1][j]++;
                    if (arr[i - 1][j - 1] != '*' && j - 1 >= 0 && i - 1 >= 0)
                        arr[i - 1][j - 1]++;
                    if (arr[i - 1][j + 1] != '*' && j + 1 < b && i - 1 >= 0)
                        arr[i - 1][j + 1]++;
                    if (arr[i + 1][j - 1] != '*' && j - 1 >= 0 && i + 1 < a)
                        arr[i + 1][j - 1]++;
                    if (arr[i + 1][j + 1] != '*' && j + 1 < b && i + 1 < a)
                        arr[i + 1][j + 1]++;
                }
            }
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
        count++;
    }
}