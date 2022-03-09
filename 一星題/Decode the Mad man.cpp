#include<bits/stdc++.h>
using namespace std;

int main()
{	
    string arr1 = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string a;
    while(getline(cin,a)){
        for(char b : a){
            for(int i=0;i<arr1.size();i++){
                if(b == ' ') {
                    cout << ' ';
                    break;
                }
                else if(b == arr1[i]) {
                    cout << arr1[i-2];
                    break;
                }
            }   
        }
        cout << endl;
    }
}	