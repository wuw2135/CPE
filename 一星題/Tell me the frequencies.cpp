#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int ind=1;
    string a;
    map<int,int> mp;
    vector<int> arr;
    while(getline(cin,a)){
        if(!ind) cout << endl;
        else ind = 0;
        
        for(char b : a){
            mp[b]++;
        }

        for(map<int,int>::iterator it = mp.begin(); it != mp.end(); it++){
            arr.push_back(it->second);
        }

        sort(arr.begin(),arr.end());

        for(int i=0; i<arr.size();i++){
            for(map<int,int>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++){
                if(arr[i] == it->second){
                    cout << it->first << " " << it->second << endl;
                    mp.erase(it->first);
                    break;
                }
            }
        }
    }
}