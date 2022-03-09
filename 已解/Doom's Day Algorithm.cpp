#include<bits/stdc++.h>
using namespace std;

int main()
{	
    vector<int> mon = {31,28,31,30,31,30,31,31,30,31,30,31};
    vector<string> day = {"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int a,b,c;
    cin >> c;
    while(c--){
        cin >> a >> b;
        int total = b;
        for(int i=0;i<a-1;i++){
            total += mon[i];
        }
        cout << day[(total+5)%7] << endl;
    }
}		