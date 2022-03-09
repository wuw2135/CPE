#include<bits/stdc++.h>
using namespace std;

int main()
{	
    long int i,j;
    while(cin >> i >> j){
        int max = 0;
        cout << i << " " << j << " ";
        
        if(i > j){
            int sud = i;
            i = j;
            j = sud;
        }

        for(;i<=j;i++){
            long int count=1,now=i;
            while(now != 1){
                if(now %2 == 1) now = 3*now+1;
                else now = now/2;
                count++;
            }
            if(count > max) max = count;
        }
        cout << max << endl;
    }
}