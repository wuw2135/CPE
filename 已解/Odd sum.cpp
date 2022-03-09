#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int a,b,c;
    cin >> a;
    for(int z=1;z<=a;z++){
        int total = 0;
        cin >> b >> c;
        for(int i=b;i<=c;i++){
            if(!(i%2)) continue;
            else total += i;
        }
        cout << "Case " << z << ": " << total << endl;
    }
}