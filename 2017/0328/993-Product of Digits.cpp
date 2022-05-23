#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int arr[9] = {0};
    int a,b;

    cin >> a;
    while(a--){
        cin >> b;
        string ans;
        for(int i=9; i>1; i--)
        {
            if(b == 0) break;
            while(b%i == 0){
                ans.push_back(i+'0');
                b /= i;
            }
            if(b == 1) break;
        }

        reverse(ans.begin(),ans.end());

        if(b == 0) cout << 0 << endl;
        else if(b != 1) cout << -1 << endl;
        else if(ans == "") cout << 1 << endl;
        else cout << ans << endl;
    }
}