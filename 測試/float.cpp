#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a;
    long int b,c,count = 0;
    cin >> b >> c;
    a = to_string(b/c);
    if(b%c != 0) a.push_back('.');
    b = (b%c)*10;
    while(b != 0){
        if(count == 10) break;
        a += to_string(b/c);
        b %= c;
        b *= 10;
        count++;   
    }

    cout << a << endl;
}
