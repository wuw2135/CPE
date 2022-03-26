#include<bits/stdc++.h>
using namespace std;

int main()
{	
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	int a,sum,flag,test=1;
    vector<int> arr;
    for(int i=1; i<=1000; i++){
        sum = 0;
        for(int j=1; j<=i; j++){
            if(i%j == 0) sum += j;
        }
        arr.push_back(sum);
    }

    while(cin >> a,a){
        cout << "Case " << test << ": ";
        flag = 0;
        for(int i=0; i<a; i++) if(arr[i] == a) flag = i+1;
        
        if(flag) cout << flag << endl;
        else cout << -1 << endl;

        test++;
    }
}