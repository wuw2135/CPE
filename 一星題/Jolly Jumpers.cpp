#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int a,b,cur;
    while(cin >> a){
        vector<int> arr;
        cur = a;
        int flag = 1;
        while(cur--){
            cin >> b;
            arr.push_back(b);
        }
        for(int i=1;i<=a-1;i++){
            flag = 0;
            for(int j=0;j<a-1;j++){
                if(abs(arr[j]-arr[j+1]) == i){
                    flag = 1;
                    break;
                }else if(abs(arr[j]-arr[j+1]) > a-1){
                    flag = 0;
                    break;
                }
            }
            if(!flag){
                cout << "Not jolly" << endl;
                break;
            }
        }
        if(flag) cout << "Jolly" << endl;
    }
}