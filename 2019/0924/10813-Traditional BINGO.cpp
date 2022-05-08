#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int a, b, ans;
    int bingo[5][5];
    bool flag;

    cin >> a;
    while (a--)
    {
        ans = 0;
        memset(bingo, 0, sizeof(bingo));
        bingo[2][2] = 0;

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 2 && j == 2)
                    continue;
                cin >> b;
                bingo[i][j] = b;
            }
        }

        flag = false;
        for (int i = 0; i < 75; i++)
        {
            cin >> b;
            if (flag)
                continue;
            if (b >= 1 && b <= 15)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (bingo[j][0] == b)
                        bingo[j][0] = 0;
                }
            }
            else if (b >= 16 && b <= 30)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (bingo[j][1] == b)
                        bingo[j][1] = 0;
                }
            }
            else if (b >= 31 && b <= 45)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (bingo[j][2] == b)
                        bingo[j][2] = 0;
                }
            }
            else if (b >= 46 && b <= 60)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (bingo[j][3] == b)
                        bingo[j][3] = 0;
                }
            }
            else if (b >= 61 && b <= 75)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (bingo[j][4] == b)
                        bingo[j][4] = 0;
                }
            }

            if (i >= 4)
            {
                for (int j = 0; j < 5; j++)
                {
                    for (int z = 0; z < 5; z++)
                    {
                        if (bingo[j][z] == 0)
                        {
                            int index = 1;
                            while (j - index >= 0 && z - index >= 0 && bingo[j - index][z - index] == 0)
                            {
                                index++;
                            }

                            if (index == 5)
                            {
                                ans = i + 1;
                                flag = true;
                                break;
                            }

                            index = 1;
                            while (j - index >= 0 && bingo[j - index][z] == 0)
                            {
                                index++;
                            }

                            if (index == 5)
                            {
                                ans = i + 1;
                                flag = true;
                                break;
                            }

                            index = 1;
                            while (j - index >= 0 && z + index < 5 && bingo[j - index][z + index] == 0)
                            {
                                index++;
                            }

                            if (index == 5)
                            {
                                ans = i + 1;
                                flag = true;
                                break;
                            }

                            index = 1;
                            while (z - index >= 0 && bingo[j][z - index] == 0)
                            {
                                index++;
                            }

                            if (index == 5)
                            {
                                ans = i + 1;
                                flag = true;
                                break;
                            }

                            index = 1;
                            while (z + index < 5 && bingo[j][z + index] == 0)
                            {
                                index++;
                            }

                            if (index == 5)
                            {
                                ans = i + 1;
                                flag = true;
                                break;
                            }

                            index = 1;
                            while (j + index < 5 && z - index >= 0 && bingo[j + index][z - index] == 0)
                            {
                                index++;
                            }

                            if (index == 5)
                            {
                                ans = i + 1;
                                flag = true;
                                break;
                            }

                            index = 1;
                            while (j + index < 5 && bingo[j + index][z] == 0)
                            {
                                index++;
                            }

                            if (index == 5)
                            {
                                ans = i + 1;
                                flag = true;
                                break;
                            }

                            index = 1;
                            while (j + index < 5 && z + index < 5 && bingo[j + index][z + index] == 0)
                            {
                                index++;
                            }

                            if (index == 5)
                            {
                                ans = i + 1;
                                flag = true;
                                break;
                            }
                        }
                    }

                    if (flag)
                        break;
                }
            }
        }

        cout << "BINGO after " << ans << " numbers announced" << endl;
    }
}