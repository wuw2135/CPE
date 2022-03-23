#include <bits/stdc++.h>
using namespace std;


int main() {
    double a,b,c,d;
    cin >> a;
    while(a--){
        cin >> b >> c >> d;
        if(c == 0.0) cout << 0.0000 << endl;
        else cout << fixed << setprecision(4) << (pow(1-c,d-1)*c)/(1-pow(1-c,b)) << endl;
    }
}