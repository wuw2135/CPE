#include <bits/stdc++.h>
using namespace std;
vector<string> arr;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a,b,c,e;
    string d;
    bool flag;

    cin >> a;
    while(a--){
        arr.clear();
        cin >> b >> c;
        for(int i=0; i<b; i++){
            cin >> d;
            for(int j=0 ;j<c; j++) d[j] = tolower(d[j]); 
            arr.push_back(d);
        }

        cin >> e;
        while(e--){
            cin >> d;
            flag = false;
            for(int i=0; i<b; i++){
                for(int j=0; j<c; j++){
                    if(arr[i][j] == tolower(d[0])){
                        int z;
                        for(z=1; z<d.size(); z++)
                            if(i-z >=0 && j-z >= 0 && arr[i-z][j-z] == tolower(d[z]) ) continue;
                            else break;
                        
                        if(z == d.size()){
                            flag = true;
                            cout << i+1 << " " << j+1 << endl;
                            break;
                        }

                        for(z=1; z<d.size(); z++)
                            if(i-z >=0 && (arr[i-z][j] == tolower(d[z]))) continue;
                            else break;

                        if(z == d.size()){
                            flag = true;
                            cout << i+1 << " " << j+1 << endl;
                            break;
                        }

                        for(z=1; z<d.size(); z++)
                            if(i-z >=0 && j+z < c && arr[i-z][j+z] == tolower(d[z])) continue;
                            else break;

                        if(z == d.size()){
                            flag = true;
                            cout << i+1 << " " << j+1 << endl;
                            break;
                        }

                        for(z=1; z<d.size(); z++)
                            if(j+z < c && arr[i][j+z] == tolower(d[z])) continue;
                            else break;
                        
                        if(z == d.size()){
                            flag = true;
                            cout << i+1 << " " << j+1 << endl;
                            break;
                        }

                        for(z=1; z<d.size(); z++)
                            if(j-z >= 0 && arr[i][j-z] == tolower(d[z])) continue;
                            else break;
                        
                        if(z == d.size()){
                            flag = true;
                            cout << i+1 << " " << j+1 << endl;
                            break;
                        }

                        for(z=1; z<d.size(); z++)
                            if(i+z < b && j-z >= 0 && arr[i+z][j-z] == tolower(d[z])) continue;
                            else break;
                        
                        if(z == d.size()){
                            flag = true;
                            cout << i+1 << " " << j+1 << endl;
                            break;
                        }

                        for(z=1; z<d.size(); z++)
                            if(i+z < b && arr[i+z][j] == tolower(d[z])) continue;
                            else break;
                            
                        if(z == d.size()){
                            flag = true;
                            cout << i+1 << " " << j+1 << endl;
                            break;
                        }

                        for(z=1; z<d.size(); z++)
                            if(i+z < b && j+z < c && arr[i+z][j+z] == tolower(d[z])) continue;
                            else break;

                        if(z == d.size()){
                            flag = true;
                            cout << i+1 << " " << j+1 << endl;
                            break;
                        }
                    }
                }
                if(flag) break;
            }
        }

        if(a!=0) cout << endl;
    }
}
