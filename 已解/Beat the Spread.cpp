#include<bits/stdc++.h>
using namespace std;

int main()
{	
    long long int a,tot,deff;
    cin >> a;
    for(int z=1;z<=a;z++){
        cin >> tot >> deff;
        int b = (tot + deff)/2 , c = abs(tot - deff)/2; 
        if(tot != b + c || deff != b - c || b < 0 || c < 0 )
            cout << "impossible" << endl;
        else cout << b << " " <<  c << endl;
    }
}