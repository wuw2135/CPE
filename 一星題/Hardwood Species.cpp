#include<bits/stdc++.h>
using namespace std;

int main()
{	
	map<string,int> mp;
    double count;
    int cases, flag = 0;
    string tree;
    cin >> cases >> ws;

    while(cases--){
        mp.clear();
        count = 0;

        if(flag) cout << endl;
        else flag = 1;

        while(getline(cin,tree),tree != ""){
            count++;
            mp[tree]++;
        }

        for(map<string,int>::iterator it = mp.begin(); it != mp.end(); it++){
            cout << it->first << " " << fixed << setprecision(4) << ((it->second)/count)*100 << endl;
        }
        
    }
}