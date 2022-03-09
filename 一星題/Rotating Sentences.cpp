#include<bits/stdc++.h>
using namespace std;

int main()
{	
	string a;
    vector<string> b;
    int c=0,max=0;
    while(getline(cin,a)){
        b.push_back(a);
        if(a.size() > max) max = a.size();
        c++;
    }
    for(int i=0;i<max;i++){
        for(int j=c-1;j>=0;j--){
            if(b[j].size() > i) cout << b[j][i];
            else cout << " ";
        }
        cout << endl;
    }
}