#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c;
    int flag;
    while(cin >> a >> b >> c){
        flag = 4;
        int king[4] = {a+1,a-1,a+8,a-8};
        if(a == b) flag = 1;
        else if(a == c || (b%8 != c%8 && b/8 != c/8) || b == c) flag = 2;
        else{
            for(int i=0; i<4; i++){
                if(king[i] < 0 || king[i]%8 == c%8 || king[i]/8 != c/8) king[i] = -1;
                if(king[i] == c) flag = 3;
            }

            bool mo = true;
            for(char d: king){
                if(d != -1){
                    mo = false;
                }
            }

            if(mo) flag = 5;
        }

        if(flag == 1) cout << "Illegal state" << endl;
        else if(flag == 2) cout << "Illegal move" << endl;
        else if(flag == 3) cout << "Move not allowed" << endl;
        else if(flag == 4) cout << "Continue" << endl;
        else cout << "Stop" << endl;
    }

}