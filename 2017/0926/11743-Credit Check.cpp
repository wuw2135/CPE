#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    string b;

    cin >> a;
    while(a--){
        int num1 = 0, num2 = 0;
        for(int i=0; i<4; i++){
            cin >> b;
            num1 += ((b[0]-'0')*2%10 + (b[0]-'0')*2/10%10) + ((b[2]-'0')*2%10 + (b[2]-'0')*2/10%10);
            num2 += (b[1] - '0') + (b[3] - '0');
        }

        if((num1 + num2)%10 == 0) cout << "Valid\n";
        else cout << "Invalid\n";
    }
}