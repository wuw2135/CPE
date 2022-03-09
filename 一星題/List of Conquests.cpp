#include<bits/stdc++.h>
using namespace std;

int main()
{	
	map<string,int> a;
    int b;
    string c,temp;
    cin >> b;
    while(b--){
        cin >> c;
        a[c]++;
        getline(cin, c);
    }
    for(const auto &p : a){
        cout << p.first << " " << p.second << endl;
    }
}