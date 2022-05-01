#include <bits/stdc++.h>
using namespace std;

char arr[250][250] = {{'O'}};
int col = 0, row = 0, setc, setc2, setr, setr2;

void fou(int a, int b, char word, char setw)
{
    if (a < 0 || a >= col || b < 0 || b >= row || arr[a][b] != word || arr[a][b] == setw)
        return;
    arr[a][b] = setw;
    fou(a - 1, b, word, setw);
    fou(a + 1, b, word, setw);
    fou(a, b - 1, word, setw);
    fou(a, b + 1, word, setw);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    char a, setw;
    string file;

    while (cin >> a)
    {
        if (a == 'I')
        {
            cin >> row >> col;
            for (int i = 0; i < col; i++)
            {
                for (int j = 0; j < row; j++)
                {
                    arr[i][j] = 'O';
                }
            }
        }
        else if (a == 'C')
        {
            for (int i = 0; i < col; i++)
            {
                for (int j = 0; j < row; j++)
                {
                    arr[i][j] = 'O';
                }
            }
        }
        else if (a == 'L')
        {
            cin >> setc >> setr >> setw;
            arr[setr - 1][setc - 1] = setw;
        }
        else if (a == 'V')
        {
            cin >> setc >> setr >> setr2 >> setw;
            if (setr > setr2)
                swap(setr, setr2);
            for (int i = setr - 1; i < setr2; i++)
                arr[i][setc - 1] = setw;
        }
        else if (a == 'H')
        {
            cin >> setc >> setc2 >> setr >> setw;
            if (setc > setc2)
                swap(setc, setc2);
            for (int i = setc - 1; i < setc2; i++)
                arr[setr - 1][i] = setw;
        }
        else if (a == 'K')
        {
            cin >> setc >> setr >> setc2 >> setr2 >> setw;
            if (setr > setr2)
                swap(setr, setr2);
            if (setc > setc2)
                swap(setc, setc2);
            for (int i = setc - 1; i < setc2; i++)
            {
                for (int j = setr - 1; j < setr2; j++)
                {
                    arr[j][i] = setw;
                }
            }
        }
        else if (a == 'F')
        {
            cin >> setc >> setr >> setw;
            char word = arr[setr - 1][setc - 1];
            fou(setr - 1, setc - 1, word, setw);
        }
        else if (a == 'S')
        {
            cin >> file;
            cout << file << endl;
            for (int i = 0; i < col; i++)
            {
                for (int j = 0; j < row; j++)
                {
                    cout << arr[i][j];
                }
                cout << endl;
            }
        }
        else if (a == 'X')
        {
            break;
        }
    }
}