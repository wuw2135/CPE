#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int flag = 1;
    while(getline(cin,a)){
        for(int i = 0; i < a.size(); i++){
            if(flag && a[i] == '"'){
                cout << "``";
                flag = 0;
            }
            else if(!flag && a[i] == '"'){
                cout << "''";
                flag = 1;
            }
            else cout << a[i];
        }
        cout << endl;
    }
    return 0;
}