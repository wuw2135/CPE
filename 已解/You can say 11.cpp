#include<bits/stdc++.h>
using namespace std;

int main()
{	
	string a;
    while(cin >> a && a != "0"){
        int odd = 0,even = 0;
        for(int i=0;i<a.size();i++){
            if(i%2 == 0) odd += (a[i] - '0');
            else even += (a[i] - '0');
        }
        if(abs(odd - even) == 0 || abs(odd - even) % 11 == 0)
            cout << a << " is a multiple of 11." << endl;
        else cout << a << " is not a multiple of 11." << endl;
    }
}	