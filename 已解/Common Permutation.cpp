#include<bits/stdc++.h>
using namespace std;

int main()
{	
	string a,b;
    while(getline(cin,a),getline(cin,b)){
        map<char,int> mp;
        for(int i=0; i<a.size();i++){
            for(int j=0; j<b.size();j++){
                if(a[i] == b[j]){
                    mp[a[i]]++;
                    b[j] = '#';
                    break;
                }
            }
        }
        for(const auto &p : mp){
            for(int i=0;i<p.second;i++) 
                cout << p.first;
        }
        cout << endl;
    } 
}