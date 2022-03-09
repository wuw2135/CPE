#include <bits/stdc++.h>
using namespace std;

int dex(string a){
    int tot = 0,two = 1;
    for(int i=a.size()-1;i>=0;i--){
        tot += (a[i]-'0')*two;
        two *= 2;
    }
    return tot;
}

int main() {
    string a, b;
    int adex,bdex,c;
    cin >> c;
    for(int i = 1; i <= c; i++){
        cin >> a >> b;
        adex = dex(a);
        bdex = dex(b);

        if(__gcd(adex,bdex) != 1) cout << "Pair #" << i << ": All you need is love!\n";
        else cout << "Pair #" << i << ": Love is not all you need!\n";

    }
}