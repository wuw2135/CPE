#include<bits/stdc++.h>
using namespace std;

int main()
{	
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	long long int a,sum,i=1;
    vector<long long int> arr;
    arr.push_back(1);
    while(arr[arr.size()-1] <= 100000000){
        i++;
        arr.push_back(arr[arr.size()-1] + i);
    }
    
    while(scanf("%lld",&a),a){
        i=0;
        while(arr[i] <= a) i++;
        printf("%lld %lld\n", arr[i]-a, i+1);
    }
}