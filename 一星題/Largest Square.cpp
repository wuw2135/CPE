#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int cases,a,b,c,d,e,flag,index;
    string str;
    cin  >> cases;
    while(cases--){
        while(cin >> a >> b >> c){
            cout << a << " " << b << " " << c << endl;
            char arr[a][b];
            for(int i=0; i<a; i++){
                cin >> str;
                for(int j=0; j<b ;j++){         
                    arr[i][j] = str[j];
                }
            }

            while(c--){
                cin >> d >> e;
                flag = 1;
                index = 1;
                while(flag){
                    if(d-index < 0 || d+index >= a || e-index < 0 || e+index >= b) flag = 0;
                    else{
                        for(int i = 0; i < 2*index+1; i++){
                            for(int j = 0; j < 2*index+1; j++){
                                if(arr[d-index+i][e-index+j] != arr[d][e]){
                                    flag = 0;
                                    break;
                                }
                            }
                            if(flag == 0) break;
                        }
                    } 
                    if(flag == 0) break;
                    else index++;
                }

                cout << 2*index-1 << endl;
            }
        }
    }
}