#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int a, b, c, d,max,min;
    bool flag;
    cin >> a;
    for(int i=1; i<=a; i++){
        cout << "Case " << i << ": ";
        max = 0;
        min = 0;
        vector<int> arr = {1,2,3};
        cin >> b >> c >> d;
        for(int j=3; j<b; j++){
            arr.push_back((arr[j-1] + arr[j-2] + arr[j-3])%c+1);
        }

        for(int z=1; z<=d; z++){
            flag = false;
            for(int k=0; k<arr.size(); k++){
                if(arr[k] == z){
                    flag = true;
                    if(max < k) max = k;
                    if(min >= k) min = k;
                    break;
                }
            }

            if(!flag){
                cout << "sequence nai" << endl;
                break;
            }
        }

        if(flag) cout << max-min << endl;
    }
	
}