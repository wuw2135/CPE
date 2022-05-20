#include <bits/stdc++.h>
using namespace std;

//https://knightzone.studio/2016/04/27/3120/uva%EF%BC%9A10530%EF%BC%8Dguessing-game/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int guessNumber;
    while (scanf("%d ", &guessNumber) != EOF && guessNumber != 0)
    {
        int lowBound = 1, highBound = 10;
        string respond;
        while (getline(cin, respond) && respond != "right on")
        {
            if (respond == "too high")
            {
                highBound = min(highBound, guessNumber - 1);
            }
            else if (respond == "too low")
            {
                lowBound = max(lowBound, guessNumber + 1);
            }

            scanf("%d ", &guessNumber);
        }

        if (guessNumber >= lowBound && guessNumber <= highBound)
        {
            printf("Stan may be honest\n");
        }
        else
        {
            printf("Stan is dishonest\n");
        }
    }
}