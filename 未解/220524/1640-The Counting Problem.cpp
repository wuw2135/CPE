#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double START,END; 
    START = clock();
    long int a, b;
    while(cin >> a >> b && a && b){
        long int arr[10] = {0};
        if(a > b) swap(a,b);
        for(long int i=a; i<=b; i++){
            long int temp = i;
            while(temp){
                arr[temp%10]++;
                temp /= 10;
            }
        }

        for(int i=0; i<10; i++){
            if(i == 9) cout << arr[i] << endl;
            else cout << arr[i] << " ";
        }
    }
    END = clock();
    cout << (END - START) / CLOCKS_PER_SEC << endl;
}