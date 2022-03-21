#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int a,b,min,count,mid;
    vector<int> arr;
    while(cin >> a){
        count = 0;
        arr.clear();
        for(int i=0;i<a;i++){
            cin >> b;
            arr.push_back(b);
        }

        sort(arr.begin(),arr.end());

        if(a%2 == 0) {
            min = arr[a/2-1];
            mid = arr[a/2] - arr[a/2-1] + 1;
            for(int c : arr){
                if(c == arr[a/2] || c == arr[a/2-1]) count++;
            }
        }
        else {
            min = arr[a/2];
            mid = 1;
            for(int c : arr){
                if(c == arr[a/2]) count++;
            }
        }
        cout << min << " " << count << " " << mid << endl;
    }
}


