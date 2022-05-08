#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c;
    
    cin >> a;
    while(a--){
        cin >> b;
        int arr[1001][b];
        for(int i=0; i<b; i++){
            cin >> c;
            arr[0][i] = c;
        }


        int n=1;
        bool flag = false;
        while(n != 1001 && !flag){
            for(int i=0; i<=b-1; i++){
                if(i == b-1) arr[n][i] = abs(arr[n-1][i]-arr[n-1][0]);
                else arr[n][i] = (abs(arr[n-1][i]-arr[n-1][i+1]));
                if(arr[n][i] != 0) flag = true;
            }


            if(!flag){
                cout <<"ZERO" << endl;
                break;
            }

            for(int i=0; i<n; i++){
                flag = true;
                for(int j=0; j<b; j++){
                    if(arr[i][j] != arr[n][j]){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    cout << "LOOP"<< endl;
                    break;
                }
            }
            n++;
        }
    }
}