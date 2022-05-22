#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c;
    vector<long long int> poly;

    while (cin >> a)
    {
        poly.clear();
        cin >> b;
        a--;
        poly.push_back(-1 * b);
        poly.push_back(1);
        while (a--)
        {
            cin >> c;
            poly.push_back(1);
            for (int i = poly.size() - 2; i >= 0; i--)
            {
                if (i == 0)
                    poly[i] *= -c;
                else
                    poly[i] = poly[i] * -c + poly[i - 1];
            }
        }

        for (int i = poly.size() - 1; i >= 0; i--)
        {
            if (abs(poly[i]) == 0 && i != 0)
                continue;
            if (i != poly.size() - 1)
            {
                if (poly[i] >= 0)
                    cout << " + ";
                else
                    cout << " - ";
            }

            if (abs(poly[i]) != 1 || i == 0)
                cout << abs(poly[i]);

            if (i == 1)
                cout << "x";
            else if (i == 0)
                cout << " = 0" << endl;
            else
                cout << "x^" << i;
        }
    }
}
