#include<bits/stdc++.h>
using namespace std;

int main()
{	
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	long long int a,b,c,biggest,deffmax;
    cin >> a;
    while(a--){
        vector<int> arr;
        cin >> b;
        while(b--){
            cin >> c;
            arr.push_back(c);
        }

        biggest = arr[0];
        for(int i = 1; i<arr.size(); i++){
            if(i == 1) deffmax = biggest - arr[i];
            else if(biggest - arr[i] > deffmax) deffmax = biggest - arr[i];

            if(arr[i] > biggest) biggest = arr[i];
        }

        cout << deffmax << endl;
    }
}