#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b,first,flag;
    vector<long long int> sto;
    while(cin >> a >> b){
        sto.clear();
        flag = 1;
        first = b;
        if(a == 0 || b == 0 || b == 1) flag = 0;
        else if(a < b || a%b != 0) flag = 0;

        if(flag){
            while(a > b && a != b){
                if(a%first != 0){
                    flag = 0;
                    break;
                }
                sto.push_back(a);
                sto.push_back(b);
                a /= first;
                b *= first;
            }

            if(a == b) sto.push_back(b);
            else if(b/first != a && a*first != b) flag = 0;
        }

        if(flag){
            sort(sto.begin(),sto.end(),greater<int>());
            for(int i=0;i<sto.size();i++){
                cout << sto[i] << " ";
            }
            cout << 1;
        }else cout << "Boring!";
        cout << endl;
    }
}