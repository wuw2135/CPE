#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, x, y, maxy, miny;
    string b;
    char arr[60][60];
    int print[100];

    cin >> a;
    for (int i = 1; i <= a; i++)
    {

        memset(arr, ' ', sizeof(arr[0][0]) * 60 * 60);
        x = 1;
        y = 0;

        cout << "Case #" << i << ":" << endl;
        cin >> b;

        maxy = 0, miny = 0;
        for (int j = 0; j < b.size(); j++)
        {
            if ((b[j] == 'R' && b[j - 1] == 'R') || (b[j] == 'C' && b[j - 1] == 'R'))
            {
                y++;
                if (y > maxy)
                    maxy = y;
            }
            else if (b[j] == 'F' && (b[j - 1] == 'F' || b[j - 1] == 'C'))
            {
                y--;
                if (y < miny)
                    miny = y;
            }
        }

        y = maxy;

        for (int j = 0; j < b.size(); j++)
        {
            if (b[j] == 'R' || b[j] == 'C')
            {
                if (j > 0 && ((b[j] == 'R' && b[j - 1] == 'R') || (b[j] == 'C' && b[j - 1] == 'R')))
                    y--;
                if (b[j] == 'R')
                    arr[y][1 + x] = 47;
                else
                    arr[y][1 + x] = 95;
            }
            else if (b[j] == 'F')
            {
                if (j > 0 && (b[j - 1] == 'F' || b[j - 1] == 'C'))
                    y++;
                arr[y][1 + x] = 92;
            }

            print[y] = 1 + x;
            x++;
        }
        print[maxy - miny + 1] = 1 + x;

        for (int j = 0; j <= maxy - miny + 1; j++)
        {
            for (int z = 0; z <= print[j]; z++)
            {
                if (z == 0 && j != maxy - miny + 1)
                {
                    cout << "|";
                }
                else if (z == 0 && j == maxy - miny + 1)
                {
                    cout << "+";
                }
                else if (j == maxy - miny + 1)
                {
                    cout << "-";
                }
                else
                {
                    cout << arr[j][z];
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}