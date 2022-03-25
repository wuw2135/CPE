#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int a,b,c,sum;
    vector<int> arr;

    cin >> a;
    while(a--){
        arr.clear();
        sum = 0;
        cin >> b;
        while(b--){
            cin >> c;
            arr.push_back(c);
        }

        for(int i=1; i<arr.size(); i++){
            for(int j=i-1; j>=0; j--){
                if(arr[i] >= arr[j]) sum++;
            }
        }

        cout << sum << endl;
    }
}